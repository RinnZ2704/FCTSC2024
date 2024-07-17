#include "em_gpio.h"
#include "sl_udelay.h"
#include "app_log.h"
GPIO_Port_TypeDef DHT11_VCC_PIN_TYPE;
GPIO_Port_TypeDef DHT11_OUT_PIN_TYPE = GPIO_PORTA;
int DHT11_VCC_PIN_NUMBER;
int DHT11_OUT_PIN_NUMBER = 4;

void delay_us(int us)
{
  sl_udelay_wait(us);
}

void dht11_init()
{
GPIO_PinModeSet(DHT11_OUT_PIN_TYPE, DHT11_OUT_PIN_NUMBER, gpioModePushPull, 0);
delay_us(18000);
GPIO_PinModeSet(DHT11_OUT_PIN_TYPE, DHT11_OUT_PIN_NUMBER, gpioModePushPull, 1);
delay_us(40);
GPIO_PinModeSet(DHT11_OUT_PIN_TYPE, DHT11_OUT_PIN_NUMBER, gpioModeInput, 0);
delay_us(94);
}

void dht11_turn_off()
{
  GPIO_PinModeSet(DHT11_OUT_PIN_TYPE, DHT11_OUT_PIN_NUMBER, gpioModePushPull, 0);
}

void dht11_read_output(int *dht11_output_bits[50]);
void dht11_wait_for_voltage_level(int voltage_level);
int dht11_out_pin_read_digital();

int dht11_read_temp()
{
  int dht11_output_bits[50];
  int temperature = 0;
  //dht11_read_output(&dht11_output_bits);
  for(int i = 1; i <= 40; i++)
        {
          dht11_wait_for_voltage_level(1);
          delay_us(40);
          int out_pin_value = dht11_out_pin_read_digital();
          int data_bit_value = out_pin_value;
          dht11_output_bits[i] = data_bit_value;
          dht11_wait_for_voltage_level(0);
        }

  for(int i = 25; i <= 32; i++)
    {
      int bit = dht11_output_bits[i];
      if(bit == 0)
        {
          temperature = temperature & ~(1 << (7-(i-25)));
        }
      else
        {
          temperature = temperature | (1 << (7-(i-25)));
        }
    }
  return temperature;
}
void dht11_read_output(int* dht11_output_bits[50])
{
  for(int i = 1; i <= 40; i++)
      {
        dht11_wait_for_voltage_level(1);
        delay_us(40);
        int out_pin_value = dht11_out_pin_read_digital();
        int data_bit_value;
        if(out_pin_value == 0)
          {
            data_bit_value = 0;
          }
        else
          {
            data_bit_value = 1;
          }
        *(dht11_output_bits + i) = data_bit_value;
        dht11_wait_for_voltage_level(0);
      }
}
void dht11_wait_for_voltage_level(int voltage_level)
{
  int out_pin_value = dht11_out_pin_read_digital();
  while(out_pin_value != voltage_level)
  {
    out_pin_value = dht11_out_pin_read_digital();
    //app_log("Pin: %d\n", out_pin_value);
  }
}
int dht11_out_pin_read_digital()
{
  return GPIO_PinInGet(DHT11_OUT_PIN_TYPE, DHT11_OUT_PIN_NUMBER);
}
