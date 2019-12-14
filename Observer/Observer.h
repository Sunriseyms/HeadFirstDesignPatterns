//
// Created by y00455335 on 2019/12/7.
//

#ifndef HEADFIRSTDESIGNPATTERNS_OBSERVER_H
#define HEADFIRSTDESIGNPATTERNS_OBSERVER_H

class Observer {
public:
    virtual void update(float temp, float humidity, float pressure) = 0;
};

#endif //HEADFIRSTDESIGNPATTERNS_OBSERVER_H
