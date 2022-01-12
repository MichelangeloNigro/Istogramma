//
// Created by miche on 12/01/2022.
//

#include "Elemento.h"

const std::string &Elemento::data::getName() const {
    return name;
}

void Elemento::data::setName(const std::string &name) {
    data::name = name;
}

float Elemento::data::getValue() const {
    return value;
}

void Elemento::data::setValue(float value) {
    data::value = value;
}

char Elemento::data::getSign() const {
    return sign;
}

void Elemento::data::setSign(char sign) {
    data::sign = sign;
}
