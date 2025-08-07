cmake_minimum_required(VERSION 3.13)            # Require at least CMake version 3.13

project(main_blink C CXX ASM)                  # Name the project and set language to C
set(CMAKE_C_STANDARD 11)                       # Use the C11 standard

# Initialize the Pico SDK
pico_sdk_init()

add_executable(main_blink                      # Create an executable named 'main_blink'
    src/main_blink.c                           #   and add this source file to it
)

# Generate extra output files for flashing the Pico
pico_add_extra_outputs(main_blink)

# Link the Pico standard library to your program
target_link_libraries(main_blink pico_stdlib)

# Enable USB output for printf, disable UART output
pico_enable_stdio_usb(main_blink 1)
pico_enable_stdio_uart(main_blink 0)