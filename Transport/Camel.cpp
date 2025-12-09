#include "Camel.h"

Camel::Camel() : Terrestrial("Верблюд", 10, 30, 8)
{}
void Camel::RacingTime(int distance) 
{
    double time{}, allRestTime{};
    int restCount{};

    time = static_cast<double>(distance) / static_cast<double>(speed);
    restCount = (static_cast<double>(distance - 1) / static_cast<double>(speed)) / movingTime;
    if (restCount)
        allRestTime = (restTime * (static_cast<double>(restCount) - 1)) + firstRestTime;
    resultTime = time + allRestTime;
}