#include "pico/stdlib.h"

#define LED_PIN 25

int main() {
    // Initialize the LED pin
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    while (true) {
        // Turn the LED on
        gpio_put(LED_PIN, 1);
        sleep_ms(1000); // Wait for 1 second

        // Turn the LED off
        gpio_put(LED_PIN, 0);
        sleep_ms(1000); // Wait for 1 second
    }

    return 0;
}
