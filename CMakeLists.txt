cmake_minimum_required(VERSION 3.13)
include("${PICO_SDK_PATH}/pico_sdk_init.cmake")

project(main_blink C CXX ASM)
set(CMAKE_C_STANDARD 11)


pico_sdk_init()

add_executable(main_blink
    src/main_blink.c
)

# Create map/bin/hex files
pico_add_extra_outputs(main_blink)

# Link the Pico SDK libraries
target_link_libraries(main_blink pico_stdlib)

# Enable USB output, disable UART output
pico_enable_stdio_usb(main_blink 1)
pico_enable_stdio_uart(main_blink 0)


