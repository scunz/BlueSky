
#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "libBlueSky/Application.hpp"

class Application
        : public BlueSky::Application
{
    Q_OBJECT
public:
    Application();

protected:
    BlueSky::PrimaryWindow* newPrimaryWindow();
};

#endif
