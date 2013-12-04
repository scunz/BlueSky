
#ifndef LOREM_IPSUM_VIEW_HPP
#define LOREM_IPSUM_VIEW_HPP

#include "libBlueSky/Views.hpp"

class LoremIpsumView : public BlueSky::View {
    Q_OBJECT
public:
    LoremIpsumView();

public:
    static BlueSky::View* create() { return new LoremIpsumView; }
};

#endif
