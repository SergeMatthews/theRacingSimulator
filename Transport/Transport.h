#include <iostream>
#include "DLLExport.h"
#ifndef _TRANSPORT_H_
#define _TRANSPORT_H_

using std::string;

class THERACINGDLL_API Transport
{
protected:
    string name;
    unsigned int speed{};
    double resultTime{};
protected:
    Transport(string name, unsigned int speed);
public:
    virtual void RacingTime(int distance) = 0;
    string GetName();
    double GetResultTime();
    bool operator > (const Transport& other);
};

#endif
