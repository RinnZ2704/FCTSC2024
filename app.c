/***************************************************************************//**
 * @file
 * @brief Top level application functions
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

/***************************************************************************//**
 * Initialize application.
 ******************************************************************************/
#include "em_gpio.h"
#include "app_log.h"
#include "stdint.h"

#include "userlibrary/delay.h"
#include "userlibrary/mq2.h"
#include "userlibrary/alarm.h"
#include "userlibrary/dht11.h"

void app_init(void)
{
  mq2_init();
}

void app_process_action(void)
{
  app_log("Duhhh\n");
  dht11_init();
  int temperature = dht11_read_temp();
  app_log("temp: %d\n", temperature);
}
