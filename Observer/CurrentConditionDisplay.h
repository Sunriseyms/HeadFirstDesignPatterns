//
// Created by y00455335 on 2019/12/9.
//

#ifndef HEADFIRSTDESIGNPATTERNS_CURRENTCONDITIONDISPLAY_H
#define HEADFIRSTDESIGNPATTERNS_CURRENTCONDITIONDISPLAY_H

#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"

class CurrentConditionDisplay : Observer, DisplayElement {
public:
    CurrentConditionDisplay(WeatherData *weatherData);
    void update(float temp, float humidity, float pressure) override;
    void display() override;
private:
    float temperature;
    float humidity;
    WeatherData* weatherData;
};
#endif //HEADFIRSTDESIGNPATTERNS_CURRENTCONDITIONDISPLAY_H
