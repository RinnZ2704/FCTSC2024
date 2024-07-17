#include "mq2.h"
#include "em_gpio.h"

const float MQ2_GAS_THRESHOLD = 0.41;
bool alarm_on = false;

GPIO_Port_TypeDef ALARM_BUZZER_PIN_TYPE = GPIO_PORTD;
GPIO_Port_TypeDef ALARM_LED_PIN_TYPE = GPIO_PORTA;
int ALARM_BUZZER_PIN_NUMBER = 3;
int ALARM_LED_PIN_NUMBER = 4;

void alarm_turn_on()
{
 GPIO_PinModeSet(ALARM_BUZZER_PIN_TYPE, ALARM_BUZZER_PIN_NUMBER, gpioModePushPull, 0);
 GPIO_PinModeSet(ALARM_LED_PIN_TYPE, ALARM_LED_PIN_NUMBER, gpioModePushPull, 1);
}
void alarm_turn_off()
{
  GPIO_PinModeSet(ALARM_BUZZER_PIN_TYPE, ALARM_BUZZER_PIN_NUMBER, gpioModePushPull, 1);
  GPIO_PinModeSet(ALARM_LED_PIN_TYPE, ALARM_LED_PIN_NUMBER, gpioModePushPull, 0);
}

void alarm_control()
{
  float mq2_read_value = mq2_read_analog();
  if(mq2_read_value >= MQ2_GAS_THRESHOLD && alarm_on == false)
    {
      alarm_turn_on();
      alarm_on = true;
    }
  else if(alarm_on && alarm_on == true)
    {
      alarm_turn_off();
      alarm_on = false;
    }
}
