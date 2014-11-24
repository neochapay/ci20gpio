#ifndef CI20GPIO
#define CI20GPIO

#include <stdint.h>
#include <stdbool.h>

#define HIGHT	1
#define LOW	0

//define primay expansion header
#define CI20_P1_PIN3	126
#define CI20_P1_PIN5	127
#define CI20_P1_PIN7	124
#define CI20_P1_PIN8	163
#define CI20_P1_PIN10	160
#define CI20_P1_PIN11	122
#define CI20_P1_PIN12	165
#define CI20_P1_PIN13	123
#define CI20_P1_PIN15	125
#define CI20_P1_PIN16	161
#define CI20_P1_PIN18	162
#define CI20_P1_PIN19	145
#define CI20_P1_PIN21	142
#define CI20_P1_PIN22	136
#define CI20_P1_PIN23	143
#define CI20_P1_PIN24	144
#define CI20_P1_PIN26	146

//define secondary extension header
#define CI20_P2_PIN3	63
#define CI20_P2_PIN4	60
#define CI20_P2_PIN5	61
#define CI20_P2_PIN6	52
#define CI20_P2_PIN7	53
#define CI20_P2_PIN8	62

//define UART header
#define CI20_UART_PIN2	74
#define CI20_UART_PIN4	84

//define LED PIN
#define CI20_LED	175

//define IR PIN
#define CI20_IR		131

//define BUTTON PIN
#define CI20_BUTTON	113

//define BOOT SELECT PIN
#define CI20_BOOT_PIN1	114
#define CI20_BOOT_PIN2	113

#ifdef __cplusplus
extern "C" {
#endif
    extern void ci20_initPin(int pin);
    extern void ci20_setMode(int pin, char mode);
    extern void ci20_setValue(int pin, char value);

    extern void ci20_setDebug(bool d);

    extern char ci20_getMode(int pin);
    extern char ci20_getValue(int pin);
#ifdef __cplusplus
}
#endif

#endif