#ifndef _EAGLE_H_
#define _EAGLE_H_

#include "Aerial.h"

class THERACINGDLL_API Eagle : public Aerial
{
public:
    Eagle();
    void RacingTime(int distance) override;
};

#endif