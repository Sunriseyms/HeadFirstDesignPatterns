//
// Created by y00455335 on 2019/12/14.
//

#include "NYStylePizzaStore.h"

std::unique_ptr<Pizza> NYStylePizzaStore::CreatePizza(const std::string &type) {
    Pizza* pizza;
    if (type == "cheese") {
        pizza = new NYStyleCheesePizza();
    }
    return std::unique_ptr<Pizza>(pizza);
}
