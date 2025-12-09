#include "Transport.h"

Transport::Transport(string name, unsigned int speed) : name(name), speed(speed)
{}

string Transport::GetName()
{
    return name;
}
double Transport::GetResultTime()
{
    return resultTime;
}
bool Transport::operator > (const Transport& other)
{
    return (resultTime > other.resultTime);
}