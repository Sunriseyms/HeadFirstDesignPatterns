//
// Created by y00455335 on 2019/12/9.
//

#ifndef HEADFIRSTDESIGNPATTERNS_CHICAGOSTYLECHEESEPIZZA_H
#define HEADFIRSTDESIGNPATTERNS_CHICAGOSTYLECHEESEPIZZA_H

#include "Pizza.h"
class ChicagoStyleCheesePizza : public Pizza {
public:
    ChicagoStyleCheesePizza();
    void Cut() override;
};


#endif //HEADFIRSTDESIGNPATTERNS_CHICAGOSTYLECHEESEPIZZA_H
