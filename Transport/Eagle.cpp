#include "Eagle.h"

Eagle::Eagle() : Aerial("Орёл", 8)
{
    DSR = 6;
}
void Eagle::RacingTime(int distance)
{
    double newDistance{};

    newDistance = (1.0 - (static_cast<double>(DSR) / 100.0)) * static_cast<double>(distance);
    resultTime = newDistance / static_cast<double>(speed);
}