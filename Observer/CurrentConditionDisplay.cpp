//
// Created by y00455335 on 2019/12/9.
//

#include "CurrentConditionDisplay.h"
#include <iostream>

void CurrentConditionDisplay::display()
{
    std::cout << "Current condition: " << temperature << "F degrees and " << humidity << "% humidity" << std::endl;
}

CurrentConditionDisplay::CurrentConditionDisplay(WeatherData *weatherData) :
        weatherData(weatherData), temperature(0.0), humidity(0.0)
{
    weatherData->RegisterObserver(this);
}

void CurrentConditionDisplay::update(float temp, float humidity, float pressure) {
    this->temperature = temp;
    this->humidity = humidity;
    display();
}
