# Raspberry Pi Pico main_blink Project

This project demonstrates how to toggle the built-in LED RASPBERRY PI PICO RP2040 in a blinking method.

## Requirements
- Raspberry Pi Pico
- Raspberry Pi Pico SDK
- ARM GNU Toolchain
- CMake
- Serial cable

## Setup
1. Clone the repo below to your machine:
   ```bash
   git clone https://github.com/raspberrypi/pico-sdk
   git clone https://github.com/raspberrypi/pico-examples
   ```
2. Set up the path:
   ```bash
   export PICO_SDK_PATH=/path/to/pico-sdk
   ```
3. Build the project:
   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ```
4. Settings up the code onto the Raspberry:
   - Connect the Pico to your machine via a serial cable.
   - Copy the generated `main_blink.uf2` file under build to the Pico's storage.
   - The machine will restart itself and start blinking
