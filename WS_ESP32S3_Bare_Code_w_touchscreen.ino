/*Using LVGL with Arduino requires some extra steps:
 *Be sure to read the docs here: https://docs.lvgl.io/master/get-started/platforms/arduino.html  */

#include "LVGL_Driver.h"    // LVGL Required
#include "LVGL_Example.h"   // Base LVGL File

// Need for touchscreen
void Driver_Init()
{
  I2C_Init();               // i2c expander initialization
  TCA9554PWR_Init(0x00);   
  Set_EXIO(EXIO_PIN8,Low);  // i2c expander pin
}

void setup()
{
  Driver_Init();  // Need for touchscreen
  LCD_Init();     // If you later reinitialize the LCD, you must initialize the SD card again !!!!!!!!!!
  Lvgl_Init();    // NEED FOR LVGL!!!!

  
  // Determine which lvgl code to run
  Lvgl_Example1();
}

void loop()
{
  Lvgl_Loop();
  vTaskDelay(pdMS_TO_TICKS(5));
}
