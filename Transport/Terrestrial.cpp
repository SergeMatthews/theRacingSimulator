#include "Terrestrial.h"

Terrestrial::Terrestrial(string name, unsigned int speed, unsigned int movingTime, double restTime) :
    Transport(name, speed), movingTime(movingTime), restTime(restTime)
{}

double Terrestrial::GetResultTime()
{
    return resultTime;
}