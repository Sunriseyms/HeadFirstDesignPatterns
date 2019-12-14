//
// Created by y00455335 on 2019/12/7.
//

#ifndef HEADFIRSTDESIGNPATTERNS_SUBJECT_H
#define HEADFIRSTDESIGNPATTERNS_SUBJECT_H

#include "Observer.h"
class Subject {
public:
    virtual void RegisterObserver(Observer* observer) = 0;

    virtual void RemoveObserver(Observer* observer) = 0;

    virtual void NotifyObservers() = 0;
};
#endif //HEADFIRSTDESIGNPATTERNS_SUBJECT_H
