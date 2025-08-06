# Raspberry Pi Pico main_blink Project

This project demonstrates how to toggle the built-in LED on a Raspberry Pi Pico at regular intervals using the Raspberry Pi Pico SDK.

## Requirements
- Raspberry Pi Pico
- Raspberry Pi Pico SDK
- ARM GNU Toolchain
- CMake
- Serial cable

## Setup
1. Clone the Raspberry Pi Pico SDK and examples repository:
   ```bash
   git clone https://github.com/raspberrypi/pico-sdk
   git clone https://github.com/raspberrypi/pico-examples
   ```
2. Set up the SDK path:
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
4. Flash the program onto the Pico:
   - Connect the Pico to your machine via a serial cable.
   - Copy the generated `main_blink.uf2` file to the Pico's storage.

## Usage
- The built-in LED will blink at 1-second intervals.

## Deliverables
- Source code
- Picture/video of the Pico working as expected
