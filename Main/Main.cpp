
#include <QApplication>
#include <QPalette>

#include "libHeavenIcons/IconManager.hpp"
#include "libHeavenIcons/IconDefaultProvider.hpp"

#include "libHeavenActions/MenuBar.hpp"
#include "libHeavenActions/Menu.hpp"

#include "libBlueSky/Windows.hpp"

#include "Application.hpp"

int main(int argc, char** argv) {
    QApplication app(argc, argv);

    Heaven::IconManager::self().defaultProvider()->addSearchPath(QString::fromLatin1(":/icons"));

    Application bsApp;
    BlueSky::PrimaryWindow* pw = bsApp.primaryWindow();

    QPalette p;
    p.setColor(QPalette::Base, qRgb(0xDD, 0xEE, 0xFF));
    pw->setPalette(p);
    pw->show();

    return app.exec();
}
