#pragma warning (disable : 4251 )
#include <iostream>

#ifndef _TRANSPORT_H_
#define _TRANSPORT_H_

#include "DLLExport.h"

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
    virtual double GetResultTime() = 0;
    bool operator > (const Transport& other);
};

#endif
