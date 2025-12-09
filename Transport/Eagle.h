#include "Aerial.h"

#ifndef _EAGLE_H_
#define _EAGLE_H_

class THERACINGDLL_API Eagle : public Aerial
{
public:
    Eagle();
    void RacingTime(int distance) override;
};

#endif