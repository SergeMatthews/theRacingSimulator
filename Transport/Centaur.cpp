#include "Centaur.h"

Centaur::Centaur() : Terrestrial("Кентавр", 15, 8, 2)
{}
void Centaur::RacingTime(int distance)
{
    double time{}, allRestTime{};
    int restCount{};

    time = static_cast<double>(distance) / static_cast<double>(speed);
    restCount = (static_cast<double>(distance - 1) / static_cast<double>(speed)) / movingTime;
    if (restCount)
        allRestTime = (restTime * static_cast<double>(restCount));
    resultTime = time + allRestTime;
}
