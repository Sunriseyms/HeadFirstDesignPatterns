//
// Created by y00455335 on 2019/12/14.
//

#ifndef HEADFIRSTDESIGNPATTERNS_NYSTYLEPIZZASTORE_H
#define HEADFIRSTDESIGNPATTERNS_NYSTYLEPIZZASTORE_H

#include "PizzaStore.h"
#include "NYStyleCheesePizza.h"
class NYStylePizzaStore : public PizzaStore {
public:
    std::unique_ptr<Pizza> CreatePizza(const std::string &type) override;
};


#endif //HEADFIRSTDESIGNPATTERNS_NYSTYLEPIZZASTORE_H
