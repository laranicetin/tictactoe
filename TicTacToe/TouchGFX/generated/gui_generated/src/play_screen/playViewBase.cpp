/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/play_screen/playViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

playViewBase::playViewBase() :
    buttonCallback(this, &playViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    Image1.setXY(0, 0);
    Image1.setBitmap(touchgfx::Bitmap(BITMAP_PLAY_ID));
    add(Image1);

    buttonPlay.setXY(120, 188);
    buttonPlay.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUND_NORMAL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUNDED_PRESSED_ID));
    buttonPlay.setLabelText(touchgfx::TypedText(T___SINGLEUSE_CN16));
    buttonPlay.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonPlay.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonPlay.setAction(buttonCallback);
    add(buttonPlay);
}

playViewBase::~playViewBase()
{

}

void playViewBase::setupScreen()
{

}

void playViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonPlay)
    {
        //Interaction1
        //When buttonPlay clicked change screen to game
        //Go to game with no screen transition
        application().gotogameScreenNoTransition();
    }
}