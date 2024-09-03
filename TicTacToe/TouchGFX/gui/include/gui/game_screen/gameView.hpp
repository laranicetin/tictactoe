#ifndef GAMEVIEW_HPP
#define GAMEVIEW_HPP

#include <gui_generated/game_screen/gameViewBase.hpp>
#include <gui/game_screen/gamePresenter.hpp>

class gameView : public gameViewBase
{
public:
    gameView();
    virtual ~gameView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

protected:

};

#endif // GAMEVIEW_HPP
