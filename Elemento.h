//
// Created by miche on 12/01/2022.
//

#ifndef ISTOGRAMMA_ELEMENTO_H
#define ISTOGRAMMA_ELEMENTO_H


#include <string>

class Elemento {
struct data{
private:
    std::string name;
    float value;
    char sign;
public:
    const std::string &getName() const;

    void setName(const std::string &name);

    float getValue() const;

    void setValue(float value);

    char getSign() const;

    void setSign(char sign);
};

public:
data dat;
};


#endif //ISTOGRAMMA_ELEMENTO_H
