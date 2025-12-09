#include "Terrestrial.h"

#ifndef _CAMEL_H_
#define _CAMEL_H_

class THERACINGDLL_API Camel : public Terrestrial
{
private:
    double firstRestTime{ 5 };
public:
    Camel();
    void RacingTime(int distance) override;
};

#endif
