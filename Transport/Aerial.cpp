#include "Aerial.h"

Aerial::Aerial(string name, unsigned int speed) : Transport(name, speed)
{}

double Aerial::GetResultTime()
{
    return resultTime;
}