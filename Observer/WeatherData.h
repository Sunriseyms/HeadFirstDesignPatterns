//
// Created by y00455335 on 2019/12/7.
//

#ifndef HEADFIRSTDESIGNPATTERNS_WEATHERDATA_H
#define HEADFIRSTDESIGNPATTERNS_WEATHERDATA_H

#include "Subject.h"
#include <set>
class WeatherData : Subject {
public:
    WeatherData():temperature(0.0),humidity(0.0),pressure(0.0){};

    void RegisterObserver(Observer *observer) override;

    void RemoveObserver(Observer *observer) override;

    void NotifyObservers() override;

    void MeasurementsChanged();

    void SetMeasurements(float temperature, float humidity, float pressure);

private:
    std::set<Observer*> Observers;
    float temperature;
    float humidity;
    float pressure;
};

#endif //HEADFIRSTDESIGNPATTERNS_WEATHERDATA_H
