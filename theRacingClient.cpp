#include <iostream>
#include <string>

#include "Transport/AllTransport.h"
#include "Transport/Racing.h"

int main()
{
    setlocale(LC_ALL, "RU");

    Racing race;
    while (race.Play());

    return EXIT_SUCCESS;
}
