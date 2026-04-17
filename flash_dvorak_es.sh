#!/usr/bin/env bash
# Flash ErgoDox EZ with Dvorak_Es firmware
# Usage: ./flash_dvorak_es.sh [--build]

set -e

FIRMWARE="$(dirname "$0")/ergodox_ez_base_Dvorak_Es.hex"
MCU="at90usb1286"

if [[ "$1" == "--build" ]]; then
    echo "Building firmware..."
    qmk compile -kb ergodox_ez -km Dvorak_Es
fi

if [[ ! -f "$FIRMWARE" ]]; then
    echo "Error: firmware not found at $FIRMWARE"
    echo "Run with --build to compile it first."
    exit 1
fi

echo "Firmware: $FIRMWARE"
echo "$(du -h "$FIRMWARE" | cut -f1) / hex ready"
echo ""
echo "Waiting for ErgoDox EZ bootloader (press reset button on keyboard)..."

teensy_loader_cli --mcu=$MCU -w -v "$FIRMWARE"

echo ""
echo "Done! Keyboard should be back online."
