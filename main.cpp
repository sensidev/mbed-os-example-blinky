#include "mbed.h"
#include "ISL29011.h"

static Serial pc(USBTX, USBRX);

I2C i2c(I2C_SDA, I2C_SCL);
ISL29011 lux(i2c);

InterruptIn btn(PA_0); /* S2 - button */
DigitalOut led1(LED1);

static void rise() {
    pc.printf("RISE\n");
    led1 = true;
}

static void fall() {
    pc.printf("FALL\n");
}


// main() runs in its own thread in the OS
// (note the calls to Thread::wait below for delays)
int main() {
    pc.baud(115200);

    pc.printf("Entering main()\r\n");

    lux.setMode(ISL29011::ALS_CONT);
    lux.setResolution(ISL29011::ADC_16BIT);
    lux.setRange(ISL29011::RNG_64000);

    btn.rise(&rise);
    btn.fall(&fall);

    while (true) {
        led1 = !led1;

        pc.printf("Light: %d \r\n", lux.getData());

        Thread::wait(500);
    }
}
