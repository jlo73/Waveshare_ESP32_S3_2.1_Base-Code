#include "LVGL_Example.h"

// create a screen object
lv_obj_t *screen;

// Make a color palette //
lv_color_t black = lv_color_black();
lv_color_t white = lv_color_white();                    // White
lv_color_t red = lv_palette_main(LV_PALETTE_RED);       // Red
lv_color_t green = lv_palette_main(LV_PALETTE_GREEN);   // Green
lv_color_t blue = lv_palette_main(LV_PALETTE_BLUE);     // Blue
lv_color_t yellow = lv_palette_main(LV_PALETTE_YELLOW); // Yellow

// Code the display
void Lvgl_Example1(void){
  screen = lv_scr_act(); // set active screen
  lv_obj_set_style_bg_color(screen, blue, 0); // set the background to blue

}