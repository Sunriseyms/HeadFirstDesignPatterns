//
// Created by y00455335 on 2019/12/11.
//

#ifndef HEADFIRSTDESIGNPATTERNS_PIZZASTORE_H
#define HEADFIRSTDESIGNPATTERNS_PIZZASTORE_H

#include "Pizza.h"
#include <string>
#include <memory>

class PizzaStore {
public:
    virtual std::unique_ptr<Pizza> CreatePizza(const std::string& type) = 0;
    std::unique_ptr<Pizza> OrderPizza(const std::string& type) {
        std::unique_ptr<Pizza> pizza = CreatePizza(type);
        pizza->Prepare();
        pizza->Cut();
        return pizza;
    };
};

#endif //HEADFIRSTDESIGNPATTERNS_PIZZASTORE_H
