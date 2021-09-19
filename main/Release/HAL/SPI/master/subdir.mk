################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/SPI/master/master.c \
../HAL/SPI/master/master_cfg.c 

OBJS += \
./HAL/SPI/master/master.o \
./HAL/SPI/master/master_cfg.o 

C_DEPS += \
./HAL/SPI/master/master.d \
./HAL/SPI/master/master_cfg.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/SPI/master/%.o: ../HAL/SPI/master/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


