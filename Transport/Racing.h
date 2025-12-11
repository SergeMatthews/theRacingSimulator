#include <iostream>

#ifndef _RACING_H_
#define _RACING_H_

#include "AllTransport.h"

using std::cout;
using std::cin;
using std::endl;

enum class RACE_TYPE
{
    NO_RACE,
    TER,
    AIR,
    MIXED
};

enum class TRANSPORT_TYPE
{
    OFFROAD_BOOTS = 1,
    BROOM,
    CAMEL,
    CENTAUR,
    EAGLE,
    FAST_CAMEL,
    FLYING_CARPET
};
enum class ACTION_TYPE
{
    REGISTRATION = 1,
    START_RACE
};

class THERACINGDLL_API Racing
{
private:
    unsigned int distance{};
    RACE_TYPE raceType{};
    Transport** competitors{ nullptr };
    int competitorsNumber{ 0 };
    bool racerOn[7]{};
private:
    void Greeting();
    RACE_TYPE RaceSelection();
    void SetDistance();
    ACTION_TYPE ActionSelection();
    void Registration();
    void RacerPushBack(Transport**& racer, int& racersNumber, int command);
    void ShowCompetitors();
    void ShowResult();
    void StartRace();
    void RacersInsertionSort(Transport** arr, int size);
    void ShowList();
    void FinishRace();
    bool PlayAgain();
public:
    Racing();
    bool Play();
};


#endif
