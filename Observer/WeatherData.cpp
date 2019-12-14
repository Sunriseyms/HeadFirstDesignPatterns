//
// Created by y00455335 on 2019/12/7.
//

#include "WeatherData.h"
#include <algorithm>

void WeatherData::RegisterObserver(Observer *observer) {
    Observers.insert(observer);
}

void WeatherData::RemoveObserver(Observer *observer) {
    if (Observers.find(observer) != Observers.end()) {
        Observers.erase(observer);
    }
}

void WeatherData::NotifyObservers() {
    std::for_each(Observers.begin(), Observers.end(), [&](Observer* observer){observer->update(temperature, humidity, pressure);});
}

void WeatherData::MeasurementsChanged() {
    NotifyObservers();
}

void WeatherData::SetMeasurements(float temperature, float humidity, float pressure) {
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    MeasurementsChanged();
}
