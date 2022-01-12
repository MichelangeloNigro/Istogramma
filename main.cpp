#include <iostream>
#include "Istogramma.h"

int main() {
    Istogramma pippo(3);
    std::cout << pippo.elements.size()<< std::endl;
    std::_List_iterator<Elemento *> ele;
    ele=pippo.elements.begin();
    (*ele)->dat.setSign('+');
    (*ele)->dat.setValue(4);
    (*ele)->dat.setName("marco ");
    ++ele;
    (*ele)->dat.setSign('-');
    (*ele)->dat.setValue(5);
    (*ele)->dat.setName("giulio");
    ++ele;
    (*ele)->dat.setSign('*');
    (*ele)->dat.setValue(8);
    (*ele)->dat.setName("mario ");
    //pippo.drawAbsolute();
    pippo.drawPercentage();

    return 0;
}
