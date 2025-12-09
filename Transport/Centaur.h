#include "Terrestrial.h"

#ifndef _CENTAUR_H_
#define _CENTAUR_H_

class THERACINGDLL_API Centaur : public Terrestrial
{
public:
    Centaur();
    void RacingTime(int distance) override;
};

#endif
