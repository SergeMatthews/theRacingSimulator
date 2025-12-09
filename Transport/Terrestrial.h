#include "Transport.h"

#ifndef _TERRESTRIAL_H_
#define _TERRESTRIAL_H_

class THERACINGDLL_API Terrestrial : public Transport
{
protected:
    unsigned int movingTime{};
    double restTime{};
protected:
    Terrestrial(string name, unsigned int speed, unsigned int movingTime, double restTime); 
public:
    virtual void RacingTime(int distance) = 0;
};

#endif
