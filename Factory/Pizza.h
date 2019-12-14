//
// Created by y00455335 on 2019/12/9.
//

#ifndef HEADFIRSTDESIGNPATTERNS_PIZZA_H
#define HEADFIRSTDESIGNPATTERNS_PIZZA_H

#include <iostream>
#include <string>

class Pizza {
public:
    virtual void Prepare();

    virtual void Bake();

    virtual void Cut() = 0;
    virtual void Box();

    Pizza(std::string name, std::string dough, std::string sauce):name(std::move(name)),
                            dough(std::move(dough)), sauce(std::move(sauce)){};
    std::string GetName() {
        return name;
    };

    std::string name;
    std::string dough;
    std::string sauce;
};

#endif //HEADFIRSTDESIGNPATTERNS_PIZZA_H
