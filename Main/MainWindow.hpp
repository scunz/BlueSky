
#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include "libBlueSky/Windows.hpp"

#include "hic_MainWindowActions.h"

class MainWindow
        : public BlueSky::PrimaryWindow
        , private MainWindowActions
{
    Q_OBJECT
public:
    MainWindow();

private slots:
    void quit();
};

#endif
