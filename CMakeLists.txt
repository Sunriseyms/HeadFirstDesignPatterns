cmake_minimum_required(VERSION 3.14)
project(HeadFirstDesignPatterns)

include_directories(Observer)
include_directories(Factory)
set(CMAKE_CXX_STANDARD 11)

add_executable(HeadFirstDesignPatterns main.cpp Observer/Subject.h Observer/WeatherData.cpp Observer/WeatherData.h Observer/Observer.h Observer/DisplayElement.h Observer/CurrentConditionDisplay.cpp Observer/CurrentConditionDisplay.h Factory/Pizza.h Factory/NYStyleCheesePizza.cpp Factory/NYStyleCheesePizza.h Factory/ChicagoStyleCheesePizza.cpp Factory/ChicagoStyleCheesePizza.h Factory/PizzaStore.h Factory/NYStylePizzaStore.cpp Factory/NYStylePizzaStore.h Factory/Pizza.cpp)