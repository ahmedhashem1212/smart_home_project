################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/SPI/master/master.c \
../MCAL/SPI/master/master_cfg.c 

OBJS += \
./MCAL/SPI/master/master.o \
./MCAL/SPI/master/master_cfg.o 

C_DEPS += \
./MCAL/SPI/master/master.d \
./MCAL/SPI/master/master_cfg.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/SPI/master/%.o: ../MCAL/SPI/master/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


