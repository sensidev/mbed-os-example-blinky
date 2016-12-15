/**
 * Device specific features build (manually) from mbed-os/targets/targets.json
 * This is only needed for CLion, because mbed CLI knows how to build them.
 */

#ifndef XDOT_DEVICE_H
#define XDOT_DEVICE_H

#define DEVICE_ANALOGIN 1
#define DEVICE_ANALOGOUT 1
#define DEVICE_I2C 1
#define DEVICE_I2CSLAVE 1
#define DEVICE_INTERRUPTIN 1
#define DEVICE_PORTIN 1
#define DEVICE_PORTINOUT 1
#define DEVICE_PORTOUT 1
#define DEVICE_PWMOUT 1
#define DEVICE_RTC 1
#define DEVICE_SERIAL 1
#define DEVICE_SLEEP 1
#define DEVICE_SPI 1
#define DEVICE_SPISLAVE 1
#define DEVICE_STDIO_MESSAGES 1

#endif //XDOT_DEVICE_H
