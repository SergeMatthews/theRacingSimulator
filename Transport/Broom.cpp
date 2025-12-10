#include "Broom.h"

Broom::Broom() : Aerial("Метла", 20)
{}
void Broom::RacingTime(int distance)
{
    double newDistance{};

    DSR = distance / 1000;
    if (DSR >= 1000)
        resultTime = 0;
    else
    {
        newDistance = (1.0 - (static_cast<double>(DSR) / 100.0)) * static_cast<double>(distance);
        resultTime = newDistance / static_cast<double>(speed);
    }
}