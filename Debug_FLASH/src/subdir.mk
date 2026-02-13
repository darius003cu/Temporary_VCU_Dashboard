################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/FT81_display.c \
../src/FT81_misc.c \
../src/FT81_sound.c \
../src/FT81_touch.c \
../src/display.c \
../src/main.c 

OBJS += \
./src/FT81_display.o \
./src/FT81_misc.o \
./src/FT81_sound.o \
./src/FT81_touch.o \
./src/display.o \
./src/main.o 

C_DEPS += \
./src/FT81_display.d \
./src/FT81_misc.d \
./src/FT81_sound.d \
./src/FT81_touch.d \
./src/display.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/FT81_display.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


