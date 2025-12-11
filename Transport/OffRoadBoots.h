#ifndef _OFFROADBOOTS_H_
#define _OFFROADBOOTS_H_

#include "Terrestrial.h"

class THERACINGDLL_API OffRoadBoots : public Terrestrial
{
private:
    double firstRestTime{ 10 };
public:
    OffRoadBoots();
    void RacingTime(int distance) override;
};

#endif