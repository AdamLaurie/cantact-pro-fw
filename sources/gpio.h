/*
 * gpio.h
 *
 */

#ifndef GPIO_H_
#define GPIO_H_

#include <stdlib.h>

#define GPIO_LED_1_PORT 0
#define GPIO_LED_1_PIN 23
#define GPIO_LED_2_PORT 1
#define GPIO_LED_2_PIN 8
#define GPIO_LED_3_PORT 1
#define GPIO_LED_3_PIN 21
#define GPIO_LED_4_PORT 0
#define GPIO_LED_4_PIN 24

#define GPIO_SWCAN_MODE0_PORT 0
#define GPIO_SWCAN_MODE0_PIN 2
#define GPIO_SWCAN_MODE1_PORT 1
#define GPIO_SWCAN_MODE1_PIN 14
#define GPIO_SWCAN_ENABLE_PORT 0
#define GPIO_SWCAN_ENABLE_PIN 21

// SWCAN Mode Control Logic Levels
// Logic Level    Operation
// MODE0 MODE1
// 0     0        Sleep mode
// 0     1        High voltage wake-up mode
// 1     0        High speed mode
// 1     1        Normal mode

#define SWCAN_MODE_SLEEP 0
#define SWCAN_MODE_HS 1
#define SWCAN_MODE_HVWAKE 2
#define SWCAN_MODE_NORMAL 3

#define SWCAN_ENABLE 1
#define SWCAN_DISABLE 0

enum {
	GPIO_LED_1 = 1,
	GPIO_LED_2,
	GPIO_LED_3,
	GPIO_LED_4
};

void gpio_set_swcan_mode(uint8_t mode);
void gpio_set_swcan_enable(uint8_t enable);
void gpio_set_led(uint8_t led, uint8_t state);
void gpio_toggle_led(uint8_t led);


#endif /* GPIO_H_ */
