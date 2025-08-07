#include "pico/stdlib.h" // Library for the functions below

// The pin for the built-in LED
#define LED_PIN 25

int main() {
    // Set up the LED pin
    gpio_init(LED_PIN);
    // Tell the device pin we set up above it will be used as output
    gpio_set_dir(LED_PIN, GPIO_OUT);

    // Loops forever
    while (true) {
        // Turn LED on
        gpio_put(LED_PIN, 1);
        // Wait 1 second/1000ms
        sleep_ms(1000);

        // Turn LED off
        gpio_put(LED_PIN, 0);
        // Wait 1 second/1000ms
        sleep_ms(1000);
    }
}