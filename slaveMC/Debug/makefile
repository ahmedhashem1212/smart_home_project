################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/SPI/subdir.mk
-include MCAL/Dio/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
slaveMC.lss \

FLASH_IMAGE += \
slaveMC.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: slaveMC.elf secondary-outputs

# Tool invocations
slaveMC.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,slaveMC.map -mmcu=atmega32 -o "slaveMC.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

slaveMC.lss: slaveMC.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S slaveMC.elf  >"slaveMC.lss"
	@echo 'Finished building: $@'
	@echo ' '

slaveMC.hex: slaveMC.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex slaveMC.elf  "slaveMC.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: slaveMC.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 slaveMC.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) slaveMC.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
