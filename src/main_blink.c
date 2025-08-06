#include "pico/stdlib.h"

#define LED_PIN 25 // Define a constant for the LED pin

int main() {
    // Initialize the LED pin
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT); // Set the pin for output

    while (true) {
        // Turn the LED on
        gpio_put(LED_PIN, 1);
        sleep_ms(1000); // Wait for 1 second/1000ms

        // Turn the LED off
        gpio_put(LED_PIN, 0);
        sleep_ms(1000); // Wait for 1 second/1000ms test change
    }


}
