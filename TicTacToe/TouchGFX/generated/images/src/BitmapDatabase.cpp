// 4.23.1 0x0e156590
// Generated by imageconverter. Please, do not edit!

#include <images/BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_36_tiny_rounded_normal[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_TINY_ROUNDED_NORMAL_ID = 0, Size: 100x36 pixels
extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_36_tiny_rounded_pressed[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_TINY_ROUNDED_PRESSED_ID = 1, Size: 100x36 pixels
extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_50_medium_round_normal[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUND_NORMAL_ID = 2, Size: 240x50 pixels
extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_50_medium_rounded_pressed[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUNDED_PRESSED_ID = 3, Size: 240x50 pixels
extern const unsigned char image_game[]; // BITMAP_GAME_ID = 4, Size: 480x272 pixels
extern const unsigned char image_krizec[]; // BITMAP_KRIZEC_ID = 5, Size: 68x69 pixels
extern const unsigned char image_krozec[]; // BITMAP_KROZEC_ID = 6, Size: 68x69 pixels
extern const unsigned char image_play[]; // BITMAP_PLAY_ID = 7, Size: 480x272 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_alternate_theme_images_widgets_button_regular_height_36_tiny_rounded_normal, 0, 100, 36, 3, 0, 94, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 36, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_alternate_theme_images_widgets_button_regular_height_36_tiny_rounded_pressed, 0, 100, 36, 3, 0, 94, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 36, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_alternate_theme_images_widgets_button_regular_height_50_medium_round_normal, 0, 240, 50, 18, 1, 204, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 48, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_alternate_theme_images_widgets_button_regular_height_50_medium_rounded_pressed, 0, 240, 50, 5, 0, 230, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_game, 0, 480, 272, 0, 0, 480, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 272, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_krizec, 0, 68, 69, 32, 32, 5, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 5, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_krozec, 0, 68, 69, 26, 2, 17, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 2, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_play, 0, 480, 272, 0, 0, 480, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 272, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase