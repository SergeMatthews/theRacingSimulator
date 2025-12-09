#include "FastCamel.h"

FastCamel::FastCamel() : Terrestrial("Верблюд-быстроход", 40, 10, 8)
{}
void FastCamel::RacingTime(int distance)
{
    double time{}, allRestTime{};
    int restCount{};

    time = static_cast<double>(distance) / static_cast<double>(speed);
    restCount = static_cast<int>((static_cast<double>(distance - 1) / static_cast<double>(speed)) / movingTime);
    if (restCount == 1)
        allRestTime = firstRestTime;
    else if (restCount > 1)
        allRestTime = (restTime * (static_cast<double>(restCount) - 2)) + firstRestTime + secondRestTime;
    resultTime = time + allRestTime;
}