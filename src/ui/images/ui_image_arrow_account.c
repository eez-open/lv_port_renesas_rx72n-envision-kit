#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#elif defined(LV_BUILD_TEST)
#include "../lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_ARROW_ACCOUNT
#define LV_ATTRIBUTE_IMG_ARROW_ACCOUNT
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_ARROW_ACCOUNT
uint8_t img_arrow_account_map[] = {

    0xfd,0xfd,0xfd,0x8f,0xfe,0xfe,0xfe,0xff,0xfe,0xfe,0xfe,0xff,0xfe,0xfe,0xfe,0xff,0xfe,0xfe,0xfe,0xff,0xfe,0xfe,0xfe,0xff,0xfe,0xfe,0xfe,0xff,0xfe,0xfe,0xfe,0xff,0xfe,0xfe,0xfe,0xff,0xfd,0xfd,0xfd,0x9b,
    0x00,0x00,0x00,0x01,0xfe,0xfe,0xfe,0xbe,0xfe,0xfe,0xfe,0xff,0xfe,0xfe,0xfe,0xff,0xfe,0xfe,0xfe,0xff,0xfe,0xfe,0xfe,0xff,0xfe,0xfe,0xfe,0xff,0xfe,0xfe,0xfe,0xff,0xfe,0xfe,0xfe,0xd2,0xff,0xff,0xff,0x03,
    0x00,0x00,0x00,0x00,0xff,0xff,0xff,0x11,0xfe,0xfe,0xfe,0xd6,0xfe,0xfe,0xfe,0xff,0xfe,0xfe,0xfe,0xff,0xfe,0xfe,0xfe,0xff,0xfe,0xfe,0xfe,0xff,0xfe,0xfe,0xfe,0xf1,0xff,0xff,0xff,0x1e,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xed,0xed,0xed,0x0e,0xfe,0xfe,0xfe,0xe0,0xfe,0xfe,0xfe,0xff,0xfe,0xfe,0xfe,0xff,0xfe,0xfe,0xfe,0xf2,0xf9,0xf9,0xf9,0x2e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf7,0xf7,0xf7,0x20,0xfe,0xfe,0xfe,0xf7,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0x52,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0xfc,0xfc,0x55,0xfd,0xfd,0xfd,0x8c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

};

const lv_image_dsc_t img_arrow_account = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_ARGB8888,
  .header.flags = 0,
  .header.w = 10,
  .header.h = 6,
  .header.stride = 40,
  .data_size = sizeof(img_arrow_account_map),
  .data = img_arrow_account_map,
};

