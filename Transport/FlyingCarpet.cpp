#include "FlyingCarpet.h"

FlyingCarpet::FlyingCarpet() : Aerial("Ковёр-самолёт", 10)
{}
void FlyingCarpet::RacingTime(int distance)
{
    double newDistance{};

    if (distance < 1000)
        DSR = 0;
    else if (distance < 5000)
        DSR = 3;
    else if (distance < 10000)
        DSR = 10;
    else
        DSR = 5;
    newDistance = (1.0 - (static_cast<double>(DSR) / 100.0)) * static_cast<double>(distance);
    resultTime = newDistance / static_cast<double>(speed);

}