#include <iostream>
#include "WeatherData.h"
#include "CurrentConditionDisplay.h"
#include "NYStylePizzaStore.h"
int main() {
    std::cout << "Hello, World!" << std::endl;

    // 观察者模式: 气象台，各个监控看板显示。
    WeatherData w;
    WeatherData* weatherData = &w;
    CurrentConditionDisplay currentConditionDisplay(weatherData);
    weatherData->SetMeasurements(1.1, 2.2, 3.3);

    // 工厂模式：比萨店
    PizzaStore *nyStore = new NYStylePizzaStore();
    nyStore->OrderPizza("cheese");
    return 0;
}