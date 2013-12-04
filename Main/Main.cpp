
#include <QApplication>
#include <QPalette>

#include "libHeavenIcons/IconManager.hpp"
#include "libHeavenIcons/IconDefaultProvider.hpp"

#include "libHeavenActions/MenuBar.hpp"
#include "libHeavenActions/Menu.hpp"

#include "libBlueSky/Application.hpp"
#include "libBlueSky/Windows.hpp"
#include "libBlueSky/ViewDescriptor.hpp"

#include "LoremIpsumView.hpp"

int main(int argc, char** argv) {
    QApplication app(argc, argv);

    Heaven::IconManager::self().defaultProvider()->addSearchPath(QString::fromLatin1(":/icons"));

    BlueSky::Application bsApp;
    BlueSky::PrimaryWindow* pw = bsApp.primaryWindow();

    BlueSky::Mode* m = new BlueSky::Mode("12340000-0000-0000-0000-000000000000");
    m->setName(QString::fromLatin1("History"));
    m->setIcon(Heaven::IconRef("mode_Edit@2x", 32));
    bsApp.addMode(m);

    m = new BlueSky::Mode("1");
    m->setName(QString::fromLatin1("Workspace"));
    m->setIcon(Heaven::IconRef("mode_Reference@2x", 32));
    bsApp.addMode(m);

    m = new BlueSky::Mode("12340000-0000-0000-0000-000000000002");
    m->setName(QString::fromLatin1("Commit"));
    m->setIcon(Heaven::IconRef("mode_Reference@2x", 32));
    bsApp.addMode(m);

    m = new BlueSky::Mode("4");
    m->setName(QString::fromLatin1("Conflicts"));
    m->setIcon(Heaven::IconRef("mode_Reference@2x", 32));
    bsApp.addMode(m);

    m = new BlueSky::Mode("3");
    m->setName(QString::fromLatin1("Rebase"));
    m->setIcon(Heaven::IconRef("mode_Reference@2x", 32));
    bsApp.addMode(m);

    m = new BlueSky::Mode("2");
    m->setName(QString::fromLatin1("Log book"));
    m->setIcon(Heaven::IconRef("mode_Reference@2x", 32));
    bsApp.addMode(m);

    new BlueSky::ViewDescriptor("12340000-0000-0000-0000-000000000003",
                                QLatin1String("Lorem Ipsum"),
                                &LoremIpsumView::create);

    new BlueSky::ViewDescriptor("12340000-0000-0000-0000-000000000001",
                                QLatin1String("Lorem Ipsum"),
                                &LoremIpsumView::create);

    new BlueSky::ViewDescriptor("12340000-0000-0000-0000-000000000005",
                                QLatin1String("Lorem Ipsum"),
                                &LoremIpsumView::create);

    bsApp.loadState(QLatin1String(":/BlueSky.xml"), true);

//    bsApp.setActiveMode(m);

    QPalette p;
    p.setColor(QPalette::Base, qRgb(0xDD, 0xEE, 0xFF));
    pw->setPalette(p);

    Heaven::MenuBar* mb = new Heaven::MenuBar(pw);
    Heaven::Menu* menu = new Heaven::Menu(pw);
    menu->setText(QLatin1String("Foo"));
    mb->add(menu);
    pw->setMenuBar(mb);

    pw->show();

    return app.exec();
}
