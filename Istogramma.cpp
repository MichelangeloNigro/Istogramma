//
// Created by miche on 12/01/2022.
//

#include <iostream>
#include "Istogramma.h"
#include "Elemento.h"
Istogramma::Istogramma(int i) {
    for (int j = 0; j <i; ++j) {
        elements.push_back(new Elemento);
    }
}

void Istogramma::drawAbsolute() {
    for (const auto &item : elements){
        std::cout<<item->dat.getName()<<"     ";
        for (int i = 0; i < item->dat.getValue(); ++i) {
            std::cout<<item->dat.getSign();
        }
        std::cout<<std::endl;
    }

}
