#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <fcntl.h>

#include "ci20_gpio.h"

static bool debug = false;

void ci20_setDebug(bool d)
{
    debug = d;
}

void ci20_initPin(int pin)
{
    char buf[512];
    int ex_file = open("/sys/class/gpio/export",O_WRONLY);
    sprintf(buf,"%d", pin);
    write(ex_file,buf,strlen(buf));
    close(ex_file);
}

void ci20_setMode(int pin, char mode)
{
    char buf[512];
    if(mode != 'in' || mode != 'out')
    {
	return;
    }
    else
    {
	sprintf(buf, "/sys/class/gpio/gpio%d/direction", pin);
	int gpio_f = open(buf, O_WRONLY);
	write(gpio_f, mode, strlen(mode));
	close(gpio_f);
    }
}

void ci20_setValue(int pin, char value)
{

}

char ci20_getMode(int pin)
{
    return "0";

}

char ci20_getValue(int pin)
{
    return "0";
}