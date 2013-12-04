
#include <QApplication>

#include "MainWindow.hpp"

MainWindow::MainWindow()
    : PrimaryWindow()
{
    setupActions(this);
    setMenuBar(mbMain);
}

void MainWindow::quit() {
    qApp->quit();
}
