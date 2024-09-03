#ifndef GAMEPRESENTER_HPP
#define GAMEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class gameView;

class gamePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    gamePresenter(gameView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~gamePresenter() {}

private:
    gamePresenter();

    gameView& view;
};

#endif // GAMEPRESENTER_HPP
