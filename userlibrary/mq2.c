#include "mikroe_mq7.h"
#include "stdbool.h"
#include "em_gpio.h"
#include "app_log.h"
#include "stdint.h"

void mq2_init()
{
  mikroe_mq7_init(IADC0);
}

float mq2_read_analog()
{
  float mq2_analog_value;
  mikroe_mq7_read_an_pin_voltage(&mq2_analog_value);
  return mq2_analog_value;
}
