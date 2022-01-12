//
// Created by miche on 12/01/2022.
//

#ifndef ISTOGRAMMA_ISTOGRAMMA_H
#define ISTOGRAMMA_ISTOGRAMMA_H


#include <list>
#include "Elemento.h"

class Istogramma {
public:
    Istogramma(int i);
    std::list<Elemento*> elements;
    void drawAbsolute();
    void drawPercentage();
};


#endif //ISTOGRAMMA_ISTOGRAMMA_H
