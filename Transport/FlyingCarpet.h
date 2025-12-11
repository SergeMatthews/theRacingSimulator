#ifndef _FLYINGCARPET_H_
#define _FLYINGCARPET_H_

#include "Aerial.h"

class THERACINGDLL_API FlyingCarpet : public Aerial
{
public:
    FlyingCarpet();
    void RacingTime(int distance) override;
};

#endif