#ifndef PLAYVIEW_HPP
#define PLAYVIEW_HPP

#include <gui_generated/play_screen/playViewBase.hpp>
#include <gui/play_screen/playPresenter.hpp>

class playView : public playViewBase
{
public:
    playView();
    virtual ~playView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // PLAYVIEW_HPP
