#include "Transport.h"

#ifndef _AERIAL_H_
#define _AERIAL_H_

class THERACINGDLL_API Aerial : public Transport
{
protected:
    unsigned int DSR{ 0 };      // DISTANCE SHRINKING RATIO
protected:
    Aerial(string name, unsigned int speed);
public:
    virtual void RacingTime(int distance) = 0;
};

#endif