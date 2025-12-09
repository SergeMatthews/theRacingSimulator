#include "Aerial.h"

#ifndef _FLYINGCARPET_H_
#define _FLYINGCARPET_H_

class THERACINGDLL_API FlyingCarpet : public Aerial
{
public:
    FlyingCarpet();
    void RacingTime(int distance) override;
};

#endif