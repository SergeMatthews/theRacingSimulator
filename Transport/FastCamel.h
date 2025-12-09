#include "Terrestrial.h"

#ifndef _FAST_CAMEL_H_
#define _FAST_CAMEL_H_

class THERACINGDLL_API FastCamel : public Terrestrial
{
private:
    double firstRestTime{ 5 };
    double secondRestTime{ 6.5 };
public:
    FastCamel();
    void RacingTime(int distance) override;
};

#endif