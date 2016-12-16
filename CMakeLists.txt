cmake_minimum_required(VERSION 3.6)
project(xdot_blinky)

set(CMAKE_CXX_STANDARD 11)

# Add all your source files where you need CLion refactoring support.
set(SOURCE_FILES
    main.cpp)

# Take those from BUILD/xdot_l151cc/GCC_ARM/.includes_*.txt after first mbed build.
# This allows your CLion IDE to find the headers and avoid "Can't find" warnings.
include_directories(
        ISL29011
        mbed-os
        mbed-os/cmsis
        mbed-os/cmsis/TOOLCHAIN_GCC
        mbed-os/docs
        mbed-os/drivers
        mbed-os/events
        mbed-os/events/equeue
        mbed-os/features
        mbed-os/features/frameworks
        mbed-os/features/frameworks/greentea-client
        mbed-os/features/frameworks/greentea-client/greentea-client
        mbed-os/features/frameworks/greentea-client/source
        mbed-os/features/frameworks/unity
        mbed-os/features/frameworks/unity/source
        mbed-os/features/frameworks/unity/unity
        mbed-os/features/frameworks/utest
        mbed-os/features/frameworks/utest/source
        mbed-os/features/frameworks/utest/utest
        mbed-os/features/mbedtls
        mbed-os/features/mbedtls/importer
        mbed-os/features/mbedtls/inc
        mbed-os/features/mbedtls/inc/mbedtls
        mbed-os/features/mbedtls/platform
        mbed-os/features/mbedtls/platform/inc
        mbed-os/features/mbedtls/platform/src
        mbed-os/features/mbedtls/src
        mbed-os/features/nanostack
        mbed-os/features/netsocket
        mbed-os/features/storage
        mbed-os/hal
        mbed-os/hal/hal
        mbed-os/hal/storage_abstraction
        mbed-os/platform
        mbed-os/rtos
        mbed-os/rtos/rtx
        mbed-os/rtos/rtx/TARGET_CORTEX_M
        mbed-os/rtos/rtx/TARGET_CORTEX_M/TARGET_M3
        mbed-os/rtos/rtx/TARGET_CORTEX_M/TARGET_M3/TOOLCHAIN_GCC
        mbed-os/targets
        mbed-os/targets/TARGET_STM
        mbed-os/targets/TARGET_STM/TARGET_STM32L1
        mbed-os/targets/TARGET_STM/TARGET_STM32L1/TARGET_XDOT_L151CC
        mbed-os/targets/TARGET_STM/TARGET_STM32L1/TARGET_XDOT_L151CC/device
        mbed-os/targets/TARGET_STM/TARGET_STM32L1/TARGET_XDOT_L151CC/device/TOOLCHAIN_GCC_ARM
        mbed-os/targets/TARGET_STM/TARGET_STM32L1/device
)

# Take those from mbed-os/targets/targets.json for your particular target.
# Below are xdot device features.
# This allows your CLion IDE to identify I2C, Serial etc and avoid "Can't resolve type" warnings.
add_definitions(
        -DDEVICE_ANALOGIN=1
        -DDEVICE_ANALOGOUT=1
        -DDEVICE_I2C=1
        -DDEVICE_I2CSLAVE=1
        -DDEVICE_INTERRUPTIN=1
        -DDEVICE_PORTIN=1
        -DDEVICE_PORTINOUT=1
        -DDEVICE_PORTOUT=1
        -DDEVICE_PWMOUT=1
        -DDEVICE_RTC=1
        -DDEVICE_SERIAL=1
        -DDEVICE_SLEEP=1
        -DDEVICE_SPI=1
        -DDEVICE_SPISLAVE=1
        -DDEVICE_STDIO_MESSAGES=1
)

add_executable(xdot_blinky ${SOURCE_FILES})