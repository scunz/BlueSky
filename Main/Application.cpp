
#include "libBlueSky/Windows.hpp"
#include "libBlueSky/ViewDescriptor.hpp"

#include "Application.hpp"
#include "MainWindow.hpp"
#include "LoremIpsumView.hpp"

Application::Application()
    : BlueSky::Application()
{
    BlueSky::Mode* m = new BlueSky::Mode("12340000-0000-0000-0000-000000000000");
    m->setName(QString::fromLatin1("History"));
    m->setIcon(Heaven::IconRef("mode_Edit@2x", 32));
    addMode(m);

    m = new BlueSky::Mode("1");
    m->setName(QString::fromLatin1("Workspace"));
    m->setIcon(Heaven::IconRef("mode_Reference@2x", 32));
    addMode(m);

    m = new BlueSky::Mode("12340000-0000-0000-0000-000000000002");
    m->setName(QString::fromLatin1("Commit"));
    m->setIcon(Heaven::IconRef("mode_Reference@2x", 32));
    addMode(m);

    m = new BlueSky::Mode("4");
    m->setName(QString::fromLatin1("Conflicts"));
    m->setIcon(Heaven::IconRef("mode_Reference@2x", 32));
    addMode(m);

    m = new BlueSky::Mode("3");
    m->setName(QString::fromLatin1("Rebase"));
    m->setIcon(Heaven::IconRef("mode_Reference@2x", 32));
    addMode(m);

    m = new BlueSky::Mode("2");
    m->setName(QString::fromLatin1("Log book"));
    m->setIcon(Heaven::IconRef("mode_Reference@2x", 32));
    addMode(m);

    new BlueSky::ViewDescriptor("12340000-0000-0000-0000-000000000003",
                                QLatin1String("Lorem Ipsum"),
                                &LoremIpsumView::create);

    new BlueSky::ViewDescriptor("12340000-0000-0000-0000-000000000001",
                                QLatin1String("Lorem Ipsum"),
                                &LoremIpsumView::create);

    new BlueSky::ViewDescriptor("12340000-0000-0000-0000-000000000005",
                                QLatin1String("Lorem Ipsum"),
                                &LoremIpsumView::create);

    loadState(QLatin1String(":/BlueSky.xml"), true);
}

BlueSky::PrimaryWindow* Application::newPrimaryWindow() {
    return new MainWindow;
}
