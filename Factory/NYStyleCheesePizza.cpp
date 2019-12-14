//
// Created by y00455335 on 2019/12/9.
//

#include "NYStyleCheesePizza.h"

NYStyleCheesePizza::NYStyleCheesePizza()
        :Pizza("NY Style Sauce and Cheese Pizza", "Thin Gruse Dough", "Marinara Sauce"){}

void NYStyleCheesePizza::Cut() {
    std::cout << "Cutting this pizza into triangle slices" << std::endl;
}
