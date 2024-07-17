################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
D:/Program/Gecko\ SDK/extension/third_party_hw_drivers_extension-master/driver/public/mikroe/co_mq7/src/mikroe_mq7.c 

OBJS += \
./third_party_hw_drivers_2.0.2/driver/public/mikroe/co_mq7/src/mikroe_mq7.o 

C_DEPS += \
./third_party_hw_drivers_2.0.2/driver/public/mikroe/co_mq7/src/mikroe_mq7.d 


# Each subdirectory must supply rules for building sources it contributes
third_party_hw_drivers_2.0.2/driver/public/mikroe/co_mq7/src/mikroe_mq7.o: D:/Program/Gecko\ SDK/extension/third_party_hw_drivers_extension-master/driver/public/mikroe/co_mq7/src/mikroe_mq7.c third_party_hw_drivers_2.0.2/driver/public/mikroe/co_mq7/src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m33 -mthumb -std=c99 '-DDEBUG=1' '-DDEBUG_EFM=1' '-DBGM220PC22HNA=1' '-DHARDWARE_BOARD_DEFAULT_RF_BAND_2400=1' '-DHARDWARE_BOARD_SUPPORTS_1_RF_BAND=1' '-DHARDWARE_BOARD_SUPPORTS_RF_BAND_2400=1' '-DSL_BOARD_NAME="BRD4314A"' '-DSL_BOARD_REV="A02"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:\Users\tuana\SimplicityStudio\v5_workspace\FCTSUMMERCAMP\config" -I"C:\Users\tuana\SimplicityStudio\v5_workspace\FCTSUMMERCAMP\autogen" -I"C:\Users\tuana\SimplicityStudio\v5_workspace\FCTSUMMERCAMP" -I"D:/Program/Gecko SDK//extension/third_party_hw_drivers_extension-master/driver/inc" -I"D:/Program/Gecko SDK//extension/third_party_hw_drivers_extension-master/driver/thirdparty/mikrosdk_click_v2/clicks/co/lib/include" -I"D:/Program/Gecko SDK//extension/third_party_hw_drivers_extension-master/driver/public/mikroe/co_mq7/inc" -I"D:/Program/Gecko SDK//extension/third_party_hw_drivers_extension-master/driver/peripheral_drivers/mikroe/inc" -I"D:/Program/Gecko SDK//platform/Device/SiliconLabs/BGM22/Include" -I"D:/Program/Gecko SDK//app/common/util/app_log" -I"D:/Program/Gecko SDK//platform/common/inc" -I"D:/Program/Gecko SDK//hardware/board/inc" -I"D:/Program/Gecko SDK//platform/driver/button/inc" -I"D:/Program/Gecko SDK//platform/CMSIS/Core/Include" -I"D:/Program/Gecko SDK//platform/service/device_init/inc" -I"D:/Program/Gecko SDK//platform/emdrv/dmadrv/inc" -I"D:/Program/Gecko SDK//platform/emdrv/common/inc" -I"D:/Program/Gecko SDK//platform/emlib/inc" -I"D:/Program/Gecko SDK//platform/emdrv/gpiointerrupt/inc" -I"D:/Program/Gecko SDK//platform/service/iostream/inc" -I"D:/Program/Gecko SDK//platform/driver/leddrv/inc" -I"D:/Program/Gecko SDK//platform/common/toolchain/inc" -I"D:/Program/Gecko SDK//platform/service/system/inc" -I"D:/Program/Gecko SDK//platform/service/sleeptimer/inc" -I"D:/Program/Gecko SDK//platform/service/udelay/inc" -Os -Wall -Wextra -mno-sched-prolog -fno-builtin -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mcmse --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"third_party_hw_drivers_2.0.2/driver/public/mikroe/co_mq7/src/mikroe_mq7.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


