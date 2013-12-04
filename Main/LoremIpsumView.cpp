
#include <QFile>
#include <QTextBrowser>

#include "LoremIpsumView.hpp"

LoremIpsumView::LoremIpsumView()
    : View("12340000-0000-0000-0000-000000000001")
{
    setViewName(QLatin1String("Lorem Ipsum"));

    QFile f(QString::fromLatin1(":/LoremIpsum.txt"));
    f.open(QFile::ReadOnly);
    QString text = QString::fromUtf8(f.readAll().constData());

    QTextBrowser* tb = new QTextBrowser;
    tb->setFrameStyle(0);
    tb->setText(text);

    setWidget(tb);

}
