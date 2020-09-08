
#include <iostream>
#include "weather_station.hpp"
#include "temperature.hpp"
#include "humidity.hpp"
#include "percipitation.hpp"

int main(int argc, char **argv)
{
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "                  OBSERVER PATTERN : Behavioral" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "Observer is a behavioral design pattern that lets you define a \\
    \n\rsubscription mechanism to notify multiple objects about any events that happen \\
    \n\rto the object they’re observing." << std::endl;
    std::cout << "-------------------------------------------------------------------\n" << std::endl;
    
    std::list<IObserver *> registered_observer;
    WeatherStation weather_station;
    while(true) {
        int option;
        std::cout << " 1. Register Observer\n 2. Unregister Observer\n 3. Weather Data Update\n 4. Exit" << std::endl;
        std::cout << "selection: ";
        std::cin >> option;
        std::cout << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');

        if (option == 1) {
            std::cout << "Available Observers are [temperature, humidity, percipitation]" << std::endl;
            std::cout << "Enter your choice: ";
            std::string observer_type;
            std::cin >> observer_type;

            std::cout << "Observer Name: ";
            std::string name;            
            std::cin >> name;

            bool create_new = true;
            for (auto &it: registered_observer) {
                if ( it->get_name() == name) {
                    create_new = false;
                    std::cout << "Already exist Observer, registering with existing type!..." << std::endl;
                    weather_station.register_observer(it);
                    break;
                }
            }

            if (create_new == false)
                continue;
            
            IObserver *observer = NULL;
            if (observer_type == "temperature")
                observer = new Temperature(weather_station);
            else if(observer_type == "humidity")
                observer = new Humidity(weather_station);
            else if(observer_type == "percipitation")
                observer = new Percipitation(weather_station);
            else
                continue;

            observer->set_name(name);
            registered_observer.emplace_back(observer);
        }
        else if(option == 2) {
            std::cout << "Enter Observer Name to unregister: ";
            std::string name;
            std::cin >> name;
            for(auto &it: registered_observer) {
                if (it->get_name() == name) {
                    weather_station.unregister_observer(it);
                    break;
                }
            }
        }
        else if (option == 3) {
            std::cout << "Enter Weather Data to be updated [temperature, humidity & percipitation]" << std::endl;
            float temperature, humidity, percipitation;
            std::cout << "Temperature: ";
            std::cin >> temperature;
            std::cout << "Humidity: ";
            std::cin >> humidity;
            std::cout << "Percipitation: ";
            std::cin >> percipitation;

            weather_station.set_weatherdata(temperature, humidity, percipitation);
        }
        else if (option == 4)
            break;

        std::cout << std::endl;
    }

    return 0;
}