################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ADC.c \
../DIO.c \
../Debounce.c \
../Interrupt.c \
../Keypad.c \
../LCD.c \
../Safe.c \
../Servo.c \
../SevenSeg.c \
../Timer.c \
../main.c 

OBJS += \
./ADC.o \
./DIO.o \
./Debounce.o \
./Interrupt.o \
./Keypad.o \
./LCD.o \
./Safe.o \
./Servo.o \
./SevenSeg.o \
./Timer.o \
./main.o 

C_DEPS += \
./ADC.d \
./DIO.d \
./Debounce.d \
./Interrupt.d \
./Keypad.d \
./LCD.d \
./Safe.d \
./Servo.d \
./SevenSeg.d \
./Timer.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


