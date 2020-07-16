#ifndef __SETTINGS__H__
#define __SETTINGS__H__

#define INFO_FIRMWARE_TYPE                   "bme280"
#define INFO_FIRMWARE_VERSION                "1.0.0"

#define SUBSCRIPTION_TIMER_INTERVAL          500
#define INTERNAL_TEMPERATURE_TIMER_INTERVAL  1000
#define VOLTAGE_TIMER_INTERVAL               1000
#define BME280_TIMER_INTERVAL                5000

#define ADC_SAMPLES_PER_CHANNEL              32

#define LED_SEND_NOTIFICATION                BSP_BOARD_LED_0
#define LED_RECV_NOTIFICATION                BSP_BOARD_LED_1
#define LED_ROUTER_ROLE                      BSP_BOARD_LED_2
#define LED_CHILD_ROLE                       BSP_BOARD_LED_3

#define TWI_SCL_M                            17
#define TWI_SDA_M                            15

#endif // __SETTINGS__H__
