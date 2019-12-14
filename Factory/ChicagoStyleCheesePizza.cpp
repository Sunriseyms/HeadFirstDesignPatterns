//
// Created by y00455335 on 2019/12/9.
//

#include "ChicagoStyleCheesePizza.h"

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza():Pizza("Chicago Style Deep Dish Cheese Pizza",
        "Extra Thick Crust Dough","Plum Tomato Sauce") {

}

void ChicagoStyleCheesePizza::Cut() {
    std::cout << "Cutting this pizza into square slices" << std::endl;
}

