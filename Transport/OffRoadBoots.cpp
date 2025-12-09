#include "OffRoadBoots.h"

OffRoadBoots::OffRoadBoots() : Terrestrial("Ботинки-вездеходы", 6, 60, 5)
{}
void OffRoadBoots::RacingTime(int distance) 
{
    double time{}, allRestTime{};
    int restCount{};

    time = static_cast<double>(distance) / static_cast<double>(speed);
    restCount = (static_cast<double>(distance - 1) / static_cast<double>(speed)) / movingTime;
    if (restCount)
        allRestTime = (restTime * (static_cast<double>(restCount) - 1)) + firstRestTime;
    resultTime = time + allRestTime;
}