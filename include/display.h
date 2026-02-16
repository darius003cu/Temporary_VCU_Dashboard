#ifndef DISPLAY_H
#define DISPLAY_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Spi.h"
#include "stdint.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
//Indicator limits graphical properties
#define INDICATOR_LIMIT_UPPER 45
#define INDICATOR_UPPER_SPACING 145
#define INDICATOR_LIMIT_MIDDLE 150
#define INDICATOR_LIMIT_LOWER 450
#define INDICATOR_LIMIT_THICKNESS 10
//Brake indicator graphical properties
#define PEDAL_HEIGHT 45
#define PEDAL_WIDTH 250
#define PEDAL_FONT 31
#define PEDAL_FONT_WIDTH 25
#define PEDAL_FONT_HEIGHT 30
#define PEDAL_BRAKE_TEXT_X 265
#define PEDAL_BRAKE_TEXT_Y 1
#define PEDAL_ACCEL_TEXT_X 410
#define PEDAL_ACCEL_TEXT_Y 1
//Battery indicator graphical properties
#define BATTERY_HEIGHT 300
#define BATTERY_WIDTH 400
#define BATTERY_THICKNESS 10
#define BATTERY_X 200
#define BATTERY_Y 150
#define BATTERY_TEXT_X 400
#define BATTERY_TEXT_Y 105
#define BATTERY_FONT 31
#define BATTERY_FONT_WIDTH 25
#define BATTERY_FONT_HEIGHT 30
//Inverter temperature indicator graphical properties
#define INVERTER_TEMP_HEIGHT 300
#define INVERTER_TEMP_WIDTH 200
#define INVERTER_TEMP_THICKNESS 10
#define INVERTER_TEMP_X 0
#define INVERTER_TEMP_Y 150
#define INVERTER_TEMP_TEXT_X 50
#define INVERTER_TEMP_TEXT_Y 100
#define INVERTER_TEMP_FONT 31
#define INVERTER_TEMP_FONT_WIDTH 25
#define INVERTER_TEMP_FONT_HEIGHT 30
#define INVERTER_TEMP_MAX 60
//Battery temperature indicator graphical properties
#define BATTERY_TEMP_HEIGHT 300
#define BATTERY_TEMP_WIDTH 200
#define BATTERY_TEMP_THICKNESS 10
#define BATTERY_TEMP_X 200
#define BATTERY_TEMP_Y 150
#define BATTERY_TEMP_TEXT_X 350
#define BATTERY_TEMP_TEXT_Y 100
#define BATTERY_TEMP_FONT 31
#define BATTERY_TEMP_FONT_WIDTH 25
#define BATTERY_TEMP_FONT_HEIGHT 30
#define BATTERY_TEMP_MAX 60
//Speedometer graphical properties
#define SPEEDOMETER_RADIUS 180
#define SPEEDOMETER_INNER_RADIUS 120
#define SPEEDOMETER_X 20
#define SPEEDOMETER_Y 100
#define SPEEDOMETER_THICKNESS 4
#define SPEEDOMETER_LOWER_THICKNESS 60
#define SPEEDOMETER_FONT 18
#define SPEEDOMETER_FONT_WIDTH 8
#define SPEEDOMETER_FONT_HEIGHT 16
#define SPEEDOMETER_FONT_SCALE 7
#define SPEEDOMETER_MAX_VALUE 150
#define SPEEDOMETER_SMALL_FONT 18
#define SPEEDOMETER_SMALL_FONT_WIDTH 8
#define SPEEDOMETER_SMALL_FONT_HEIGHT 16
#define SPEEDOMETER_SMALL_FONT_VERTICAL_OFFSET 10
#define SPEEDOMETER_INDICES_FONT 31
#define SPEEDOMETER_INDICES_NUM 15
#define SPEEDOMETER_START_ANGLE 20
#define SPEEDOMETER_END_ANGLE 340
//Power meter graphical properties
#define POWERMETER_RADIUS 180
#define POWERMETER_INNER_RADIUS 120
#define POWERMETER_X 20
#define POWERMETER_Y 100
#define POWERMETER_THICKNESS 4
#define POWERMETER_LOWER_THICKNESS 60
#define POWERMETER_FONT 18
#define POWERMETER_FONT_WIDTH 8
#define POWERMETER_FONT_HEIGHT 16
#define POWERMETER_FONT_SCALE 7
#define POWERMETER_MAX_VALUE 80 // in kilowatts
#define POWERMETER_SMALL_FONT 18
#define POWERMETER_SMALL_FONT_WIDTH 8
#define POWERMETER_SMALL_FONT_HEIGHT 16
#define POWERMETER_SMALL_FONT_VERTICAL_OFFSET 10
#define POWERMETER_INDICES_FONT 31
#define POWERMETER_INDICES_NUM 16
#define POWERMETER_START_ANGLE 20
#define POWERMETER_END_ANGLE 340
//BSPD indicator graphical properties
#define BSPD_X 250
#define BSPD_Y 200
#define BSPD_WIDTH 300
#define BSPD_HEIGHT 150
#define BSPD_THICKNESS 4
#define BSPD_FONT 18
#define BSPD_FONT_WIDTH 8
#define BSPD_FONT_HEIGHT 16
#define BSPD_FONT_SCALE 7

//Display Witnesses
#define INVERTER_ERR	1U
#define BATTERY_ERR		2U
#define ACCEL_ERR		3U
#define BRAKE_ERR		4U
#define ALL_ERRS		5U

//NEW VALUES

//Battery Inner Filling
#define BATTERY_FILL_HEIGHT 429
#define BATTERY_FILL_MAX_HEIGHT 67

//Battery Outer Border
#define BORDER_THICKNESS 					5
#define VERTICAL_BATTERY_BORDER_POSITION	750
#define LOWER_VERTICAL_BATTERY_BORDER		430
#define UPPER_VERTICAL_BATTERY_BORDER		60
#define HORIZONTAL_BATTERY_BORDER_Y			60
#define HORIZONTAL_BATTERY_BORDER			755
#define HORIZONTAL_BATTERY_BORDER_END		800

//Motor Temperature
#define MOTOR_LIMITED_TEMP					60U






/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
typedef struct{
	Spi_ChannelType Spi_Channel;
}FT81;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
void DisplayInit(void);
void DisplayTest(void);
void DisplayTest2(void);
void ImageTest(void);
void SoundTest(void);
void DashboardTest(uint8_t address);
void DashboardInit(void);
void DashboardUpdate(uint32_t speed, uint32_t power, uint32_t battery_voltage, uint32_t battery_percent, uint32_t battery_temp, uint32_t inverter_temp, uint32_t brake, uint32_t acceleration, boolean BSPD, uint8_t witness);
void DashboardWitnesses(volatile uint8_t address);
void newDashboardTest(void);
void newDashboardUpdate(uint8_t Battery_Percentage, uint16_t Motor_Temperature);
#ifdef __cplusplus
}
#endif

#endif
