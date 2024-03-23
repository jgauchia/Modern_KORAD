// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: KORAD_Project

#include "ui.h"

void ui_WifiScreen_screen_init(void)
{
    ui_WifiScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_WifiScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WifiStatusLabel = lv_label_create(ui_WifiScreen);
    lv_obj_set_width(ui_WifiStatusLabel, 131);
    lv_obj_set_height(ui_WifiStatusLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WifiStatusLabel, 17);
    lv_obj_set_y(ui_WifiStatusLabel, 14);

    ui_WifiCloseButton = lv_btn_create(ui_WifiScreen);
    lv_obj_set_width(ui_WifiCloseButton, 58);
    lv_obj_set_height(ui_WifiCloseButton, 50);
    lv_obj_set_x(ui_WifiCloseButton, -8);
    lv_obj_set_y(ui_WifiCloseButton, 20);
    lv_obj_set_align(ui_WifiCloseButton, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_flag(ui_WifiCloseButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_WifiCloseButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_WifiCloseButton, lv_color_hex(0x7689AC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WifiCloseButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_WifiCloseButton, lv_color_hex(0x222222), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_WifiCloseButton, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_WifiCloseButton, lv_color_hex(0x28DCFD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_WifiCloseButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_WifiCloseButton, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WifiCloseButton, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WifiSsidNameLabel = lv_label_create(ui_WifiScreen);
    lv_obj_set_width(ui_WifiSsidNameLabel, 229);
    lv_obj_set_height(ui_WifiSsidNameLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WifiSsidNameLabel, 37);
    lv_obj_set_y(ui_WifiSsidNameLabel, 14);
    lv_obj_set_align(ui_WifiSsidNameLabel, LV_ALIGN_TOP_MID);

    lv_obj_add_event_cb(ui_WifiCloseButton, ui_event_WifiCloseButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_WifiScreen, ui_event_WifiScreen, LV_EVENT_ALL, NULL);

}
