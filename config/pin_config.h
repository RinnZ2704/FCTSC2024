#ifndef PIN_CONFIG_H
#define PIN_CONFIG_H

// $[CMU]
// [CMU]$

// $[PRS.ASYNCH0]
// [PRS.ASYNCH0]$

// $[PRS.ASYNCH1]
// [PRS.ASYNCH1]$

// $[PRS.ASYNCH2]
// [PRS.ASYNCH2]$

// $[PRS.ASYNCH3]
// [PRS.ASYNCH3]$

// $[PRS.ASYNCH4]
// [PRS.ASYNCH4]$

// $[PRS.ASYNCH5]
// [PRS.ASYNCH5]$

// $[PRS.ASYNCH6]
// [PRS.ASYNCH6]$

// $[PRS.ASYNCH7]
// [PRS.ASYNCH7]$

// $[PRS.ASYNCH8]
// [PRS.ASYNCH8]$

// $[PRS.ASYNCH9]
// [PRS.ASYNCH9]$

// $[PRS.ASYNCH10]
// [PRS.ASYNCH10]$

// $[PRS.ASYNCH11]
// [PRS.ASYNCH11]$

// $[PRS.SYNCH0]
// [PRS.SYNCH0]$

// $[PRS.SYNCH1]
// [PRS.SYNCH1]$

// $[PRS.SYNCH2]
// [PRS.SYNCH2]$

// $[PRS.SYNCH3]
// [PRS.SYNCH3]$

// $[GPIO]
// [GPIO]$

// $[TIMER0]
// [TIMER0]$

// $[TIMER1]
// [TIMER1]$

// $[TIMER2]
// [TIMER2]$

// $[TIMER3]
// [TIMER3]$

// $[TIMER4]
// [TIMER4]$

// $[USART0]
// [USART0]$

// $[USART1]
// USART1 CTS on PA08
#define USART1_CTS_PORT                          gpioPortA
#define USART1_CTS_PIN                           8

// USART1 RTS on PA07
#define USART1_RTS_PORT                          gpioPortA
#define USART1_RTS_PIN                           7

// USART1 RX on PA06
#define USART1_RX_PORT                           gpioPortA
#define USART1_RX_PIN                            6

// USART1 TX on PA05
#define USART1_TX_PORT                           gpioPortA
#define USART1_TX_PIN                            5

// [USART1]$

// $[I2C1]
// [I2C1]$

// $[PDM]
// [PDM]$

// $[LETIMER0]
// [LETIMER0]$

// $[IADC0]
// [IADC0]$

// $[I2C0]
// [I2C0]$

// $[EUART0]
// [EUART0]$

// $[PTI]
// [PTI]$

// $[MODEM]
// [MODEM]$

// $[CUSTOM_PIN_NAME]
#define _PORT                                    gpioPortA
#define _PIN                                     0

// [CUSTOM_PIN_NAME]$

#endif // PIN_CONFIG_H

