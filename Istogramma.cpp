//
// Created by miche on 12/01/2022.
//

#include "Istogramma.h"

Istogramma::Istogramma(int i) {
    for (int j = 0; j <i; ++j) {
        elements.push_back(new Elemento);
    }
}
