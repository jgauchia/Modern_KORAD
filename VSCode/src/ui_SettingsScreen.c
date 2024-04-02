// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: KORAD_Project

#include "ui.h"

void ui_SettingsScreen_screen_init(void)
{
    ui_SettingsScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_SettingsScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_left(ui_SettingsScreen, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_SettingsScreen, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_SettingsScreen, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_SettingsScreen, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WifiMenuPanel = lv_obj_create(ui_SettingsScreen);
    lv_obj_set_width(ui_WifiMenuPanel, 454);
    lv_obj_set_height(ui_WifiMenuPanel, 36);
    lv_obj_set_align(ui_WifiMenuPanel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_WifiMenuPanel, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_left(ui_WifiMenuPanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_WifiMenuPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_WifiMenuPanel, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_WifiMenuPanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_WifiMenuPanel);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, 0);
    lv_obj_set_y(ui_Label1, 2);
    lv_label_set_text(ui_Label1, "Wi-Fi");
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WifiMenuSwitch = lv_switch_create(ui_WifiMenuPanel);
    lv_obj_set_width(ui_WifiMenuSwitch, 50);
    lv_obj_set_height(ui_WifiMenuSwitch, 25);
    lv_obj_set_x(ui_WifiMenuSwitch, -13);
    lv_obj_set_y(ui_WifiMenuSwitch, 0);
    lv_obj_set_align(ui_WifiMenuSwitch, LV_ALIGN_RIGHT_MID);

    lv_obj_set_style_bg_color(ui_WifiMenuSwitch, lv_color_hex(0x7689AC), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WifiMenuSwitch, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_WifiMenuSwitch, lv_color_hex(0x222222), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_WifiMenuSwitch, LV_GRAD_DIR_VER, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_WifiMenuSwitch, lv_color_hex(0x28DCFD), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_WifiMenuSwitch, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_WifiMenuSwitch, 1, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_WifiButton = lv_btn_create(ui_WifiMenuPanel);
    lv_obj_set_width(ui_WifiButton, 93);
    lv_obj_set_height(ui_WifiButton, 26);
    lv_obj_set_x(ui_WifiButton, -109);
    lv_obj_set_y(ui_WifiButton, 0);
    lv_obj_set_align(ui_WifiButton, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_WifiButton, LV_STATE_DISABLED);       /// States
    lv_obj_add_flag(ui_WifiButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_WifiButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_WifiButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WifiButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WifiButton, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WifiIpLabel = lv_label_create(ui_WifiMenuPanel);
    lv_obj_set_width(ui_WifiIpLabel, 169);
    lv_obj_set_height(ui_WifiIpLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WifiIpLabel, 33);
    lv_obj_set_y(ui_WifiIpLabel, 2);
    lv_obj_set_align(ui_WifiIpLabel, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WifiIpLabel, LV_OBJ_FLAG_CLICKABLE);     /// Flags

    ui_EnergyMenuPanel = lv_obj_create(ui_SettingsScreen);
    lv_obj_set_width(ui_EnergyMenuPanel, 454);
    lv_obj_set_height(ui_EnergyMenuPanel, 36);
    lv_obj_set_x(ui_EnergyMenuPanel, 0);
    lv_obj_set_y(ui_EnergyMenuPanel, 45);
    lv_obj_set_align(ui_EnergyMenuPanel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_EnergyMenuPanel, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_left(ui_EnergyMenuPanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_EnergyMenuPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_EnergyMenuPanel, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_EnergyMenuPanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_EnergyMenuPanel);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, 0);
    lv_obj_set_y(ui_Label4, 2);
    lv_label_set_text(ui_Label4, "Energy auto reset");
    lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_AutoResetSwitch = lv_switch_create(ui_EnergyMenuPanel);
    lv_obj_set_width(ui_AutoResetSwitch, 50);
    lv_obj_set_height(ui_AutoResetSwitch, 25);
    lv_obj_set_x(ui_AutoResetSwitch, -13);
    lv_obj_set_y(ui_AutoResetSwitch, 0);
    lv_obj_set_align(ui_AutoResetSwitch, LV_ALIGN_RIGHT_MID);
    lv_obj_add_state(ui_AutoResetSwitch, LV_STATE_CHECKED);       /// States

    lv_obj_set_style_bg_color(ui_AutoResetSwitch, lv_color_hex(0x7689AC), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_AutoResetSwitch, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_AutoResetSwitch, lv_color_hex(0x222222), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_AutoResetSwitch, LV_GRAD_DIR_VER, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_AutoResetSwitch, lv_color_hex(0x28DCFD), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_AutoResetSwitch, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_AutoResetSwitch, 1, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_ProgMenuPanel = lv_obj_create(ui_SettingsScreen);
    lv_obj_set_width(ui_ProgMenuPanel, 454);
    lv_obj_set_height(ui_ProgMenuPanel, 74);
    lv_obj_set_x(ui_ProgMenuPanel, 0);
    lv_obj_set_y(ui_ProgMenuPanel, 90);
    lv_obj_set_align(ui_ProgMenuPanel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_ProgMenuPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_left(ui_ProgMenuPanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_ProgMenuPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_ProgMenuPanel, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_ProgMenuPanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label3 = lv_label_create(ui_ProgMenuPanel);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, 0);
    lv_obj_set_y(ui_Label3, 2);
    lv_label_set_text(ui_Label3, "Programmable KA3005P/DP");
    lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_UartSwitch = lv_switch_create(ui_ProgMenuPanel);
    lv_obj_set_width(ui_UartSwitch, 50);
    lv_obj_set_height(ui_UartSwitch, 25);
    lv_obj_set_x(ui_UartSwitch, -13);
    lv_obj_set_y(ui_UartSwitch, 0);
    lv_obj_set_align(ui_UartSwitch, LV_ALIGN_TOP_RIGHT);

    lv_obj_set_style_bg_color(ui_UartSwitch, lv_color_hex(0x7689AC), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_UartSwitch, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_UartSwitch, lv_color_hex(0x222222), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_UartSwitch, LV_GRAD_DIR_VER, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_UartSwitch, lv_color_hex(0x28DCFD), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_UartSwitch, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_UartSwitch, 1, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_BlockUartSwitch = lv_switch_create(ui_ProgMenuPanel);
    lv_obj_set_width(ui_BlockUartSwitch, 50);
    lv_obj_set_height(ui_BlockUartSwitch, 25);
    lv_obj_set_x(ui_BlockUartSwitch, -13);
    lv_obj_set_y(ui_BlockUartSwitch, 0);
    lv_obj_set_align(ui_BlockUartSwitch, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_state(ui_BlockUartSwitch, LV_STATE_CHECKED | LV_STATE_DISABLED);       /// States

    lv_obj_set_style_bg_color(ui_BlockUartSwitch, lv_color_hex(0x7689AC), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BlockUartSwitch, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_BlockUartSwitch, lv_color_hex(0x222222), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_BlockUartSwitch, LV_GRAD_DIR_VER, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_BlockUartSwitch, lv_color_hex(0x28DCFD), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_BlockUartSwitch, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_BlockUartSwitch, 1, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_ProgMenuPanel);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label5, 21);
    lv_obj_set_y(ui_Label5, -8);
    lv_obj_set_align(ui_Label5, LV_ALIGN_BOTTOM_LEFT);
    lv_label_set_text(ui_Label5, "Block when output is ON");

    ui_ExteriorMenuPanel = lv_obj_create(ui_SettingsScreen);
    lv_obj_set_width(ui_ExteriorMenuPanel, 454);
    lv_obj_set_height(ui_ExteriorMenuPanel, 36);
    lv_obj_set_x(ui_ExteriorMenuPanel, 0);
    lv_obj_set_y(ui_ExteriorMenuPanel, 172);
    lv_obj_set_align(ui_ExteriorMenuPanel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_ExteriorMenuPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_left(ui_ExteriorMenuPanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_ExteriorMenuPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_ExteriorMenuPanel, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_ExteriorMenuPanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label7 = lv_label_create(ui_ExteriorMenuPanel);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label7, 0);
    lv_obj_set_y(ui_Label7, 2);
    lv_label_set_text(ui_Label7, "Exterior");
    lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ExteriorMenuButton = lv_btn_create(ui_ExteriorMenuPanel);
    lv_obj_set_width(ui_ExteriorMenuButton, 75);
    lv_obj_set_height(ui_ExteriorMenuButton, 26);
    lv_obj_set_x(ui_ExteriorMenuButton, -11);
    lv_obj_set_y(ui_ExteriorMenuButton, 2);
    lv_obj_set_align(ui_ExteriorMenuButton, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_ExteriorMenuButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ExteriorMenuButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ExteriorMenuButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ExteriorMenuButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ExteriorMenuButton, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ScreensaverMenuPanel = lv_obj_create(ui_SettingsScreen);
    lv_obj_set_width(ui_ScreensaverMenuPanel, 454);
    lv_obj_set_height(ui_ScreensaverMenuPanel, 36);
    lv_obj_set_x(ui_ScreensaverMenuPanel, 0);
    lv_obj_set_y(ui_ScreensaverMenuPanel, 217);
    lv_obj_set_align(ui_ScreensaverMenuPanel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_ScreensaverMenuPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_left(ui_ScreensaverMenuPanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_ScreensaverMenuPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_ScreensaverMenuPanel, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_ScreensaverMenuPanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label11 = lv_label_create(ui_ScreensaverMenuPanel);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label11, 0);
    lv_obj_set_y(ui_Label11, 2);
    lv_label_set_text(ui_Label11, "Screensaver");
    lv_obj_set_style_text_font(ui_Label11, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ScreensaverSlider = lv_slider_create(ui_ScreensaverMenuPanel);
    lv_obj_set_width(ui_ScreensaverSlider, 150);
    lv_obj_set_height(ui_ScreensaverSlider, 10);
    lv_obj_set_x(ui_ScreensaverSlider, -14);
    lv_obj_set_y(ui_ScreensaverSlider, 0);
    lv_obj_set_align(ui_ScreensaverSlider, LV_ALIGN_RIGHT_MID);

    lv_obj_set_style_bg_color(ui_ScreensaverSlider, lv_color_hex(0x222222), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreensaverSlider, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_ScreensaverSlider, lv_color_hex(0x1DE8FF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_ScreensaverSlider, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_ScreensaverSlider, lv_color_hex(0x7689AC), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreensaverSlider, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_ScreensaverSlider, lv_color_hex(0x222222), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_ScreensaverSlider, LV_GRAD_DIR_VER, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ScreensaverSlider, lv_color_hex(0x28DCFD), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ScreensaverSlider, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ScreensaverSlider, 1, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_ScreensaverLabel = lv_label_create(ui_ScreensaverMenuPanel);
    lv_obj_set_width(ui_ScreensaverLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ScreensaverLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ScreensaverLabel, -22);
    lv_obj_set_y(ui_ScreensaverLabel, 2);
    lv_obj_set_align(ui_ScreensaverLabel, LV_ALIGN_CENTER);
    lv_obj_set_style_text_align(ui_ScreensaverLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ScreensaverLabel, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BeeperMenuPanel = lv_obj_create(ui_SettingsScreen);
    lv_obj_set_width(ui_BeeperMenuPanel, 454);
    lv_obj_set_height(ui_BeeperMenuPanel, 36);
    lv_obj_set_x(ui_BeeperMenuPanel, 0);
    lv_obj_set_y(ui_BeeperMenuPanel, 262);
    lv_obj_set_align(ui_BeeperMenuPanel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_BeeperMenuPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_left(ui_BeeperMenuPanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_BeeperMenuPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_BeeperMenuPanel, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_BeeperMenuPanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BeeperLabel = lv_label_create(ui_BeeperMenuPanel);
    lv_obj_set_width(ui_BeeperLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BeeperLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_BeeperLabel, -22);
    lv_obj_set_y(ui_BeeperLabel, 2);
    lv_obj_set_align(ui_BeeperLabel, LV_ALIGN_CENTER);
    lv_obj_set_style_text_align(ui_BeeperLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BeeperLabel, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label6 = lv_label_create(ui_BeeperMenuPanel);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label6, 0);
    lv_obj_set_y(ui_Label6, 2);
    lv_label_set_text(ui_Label6, "Beeper");
    lv_obj_set_style_text_font(ui_Label6, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BeeperSlider = lv_slider_create(ui_BeeperMenuPanel);
    lv_slider_set_range(ui_BeeperSlider, 0, 5);
    lv_obj_set_width(ui_BeeperSlider, 150);
    lv_obj_set_height(ui_BeeperSlider, 10);
    lv_obj_set_x(ui_BeeperSlider, -14);
    lv_obj_set_y(ui_BeeperSlider, 0);
    lv_obj_set_align(ui_BeeperSlider, LV_ALIGN_RIGHT_MID);

    lv_obj_set_style_bg_color(ui_BeeperSlider, lv_color_hex(0x222222), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BeeperSlider, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_BeeperSlider, lv_color_hex(0x1DE8FF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_BeeperSlider, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_BeeperSlider, lv_color_hex(0x7689AC), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BeeperSlider, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_BeeperSlider, lv_color_hex(0x222222), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_BeeperSlider, LV_GRAD_DIR_VER, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_BeeperSlider, lv_color_hex(0x28DCFD), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_BeeperSlider, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_BeeperSlider, 1, LV_PART_KNOB | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_WifiMenuSwitch, ui_event_WifiMenuSwitch, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_WifiButton, ui_event_WifiButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_WifiIpLabel, ui_event_WifiIpLabel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_AutoResetSwitch, ui_event_AutoResetSwitch, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_UartSwitch, ui_event_UartSwitch, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BlockUartSwitch, ui_event_BlockUartSwitch, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ExteriorMenuButton, ui_event_ExteriorMenuButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ExteriorMenuPanel, ui_event_ExteriorMenuPanel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ScreensaverSlider, ui_event_ScreensaverSlider, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BeeperSlider, ui_event_BeeperSlider, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SettingsScreen, ui_event_SettingsScreen, LV_EVENT_ALL, NULL);

}
