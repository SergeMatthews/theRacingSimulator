#ifndef _BROOM_H_
#define _BROOM_H_

#include "Aerial.h"

class THERACINGDLL_API Broom : public Aerial
{
public:
    Broom();
    void RacingTime(int distance) override;
};

#endif