//
// Created by y00455335 on 2019/12/9.
//

#ifndef HEADFIRSTDESIGNPATTERNS_NYSTYLECHEESEPIZZA_H
#define HEADFIRSTDESIGNPATTERNS_NYSTYLECHEESEPIZZA_H

#include "Pizza.h"
class NYStyleCheesePizza : public Pizza {
public:
    NYStyleCheesePizza();

    void Cut() override;
};

#endif //HEADFIRSTDESIGNPATTERNS_NYSTYLECHEESEPIZZA_H
