#pragma warning (disable : 4251 )
#include "Racing.h"

Racing::Racing()
{
    Greeting();
}

bool Racing::Play()
{
    raceType = RaceSelection();
    SetDistance();
    while (ActionSelection() != ACTION_TYPE::START_RACE)
        Registration();
    StartRace();
    return PlayAgain();
}

void Racing::Greeting()
{
    system("cls");
    cout << "Добро пожаловать в гоночный симулятор!" << endl;
}

RACE_TYPE Racing::RaceSelection()
{
    int userSelect{};
    cout << "1. Гонка для наземного транспорта" << endl;
    cout << "2. Гонка для воздушного транспорта" << endl;
    cout << "3. Гонка для наземного и воздушного транспорта" << endl;
    do {
        cout << "Выберите тип гонки: ";
        cin >> userSelect;
    } while (userSelect > 3 || userSelect < 1);

    return static_cast<RACE_TYPE>(userSelect);
}
void Racing::SetDistance()
{
    system("cls");
    unsigned int dist;
    cout << "Укажите длину дистанции (должна быть положительна): ";
    cin >> dist;
    distance = dist;
}
ACTION_TYPE Racing::ActionSelection()
{
    system("cls");
    int actionNumber{};
    if (competitorsNumber < 2)
        cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства" << endl;
    cout << "1. Зарегистрировать транспортное средство:" << endl;
    if (competitorsNumber > 1)
        cout << "2. Начать гонку" << endl;
    do {
        cout << "Выберите действие: ";
        cin >> actionNumber;
        if ((actionNumber < 1 && actionNumber > 2) || (competitorsNumber < 2 && actionNumber != 1))
            cout << "Неверное действие! Попробуйте снова" << endl;
    } while ((actionNumber < 1 && actionNumber > 2) || (competitorsNumber < 2 && actionNumber != 1));

    return static_cast<ACTION_TYPE>(actionNumber);
}
void Racing::Registration()
{
    system("cls");
    int actionNumber{ -1 };
    do {
        switch (raceType)
        {
        case RACE_TYPE::TER:
            cout << "Гонка для наземного транспорта. Расстояние: " << distance << endl;
            break;
        case RACE_TYPE::AIR:
            cout << "Гонка для воздушного транспорта. Расстояние: " << distance << endl;
            break;
        case RACE_TYPE::MIXED:
            cout << "Гонка для наземного и воздушного транспорта. Расстояние: " << distance << endl;
            break;
        }
        ShowCompetitors();
        ShowList();
        do {
            cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";
            cin >> actionNumber;
            if (actionNumber < 0 && actionNumber > 7)
                cout << "Неверное действие! Повторите снова" << endl;
        } while (actionNumber < 0 && actionNumber > 7);
        if (!actionNumber)
        {
            return;
        }
        else
        {
            switch (static_cast<TRANSPORT_TYPE>(actionNumber))
            {
            case TRANSPORT_TYPE::OFFROAD_BOOTS:
                if (raceType == RACE_TYPE::TER || raceType == RACE_TYPE::MIXED)
                {
                    if (!racerOn[actionNumber - 1])
                    {
                        RacerPushBack(competitors, competitorsNumber, actionNumber);
                        racerOn[actionNumber - 1] = true;
                    }
                    else
                    {
                        system("cls");
                        cout << "Ботинки-вездеходы уже зарегистрированы!" << endl;
                    }
                }
                else
                {
                    system("cls");
                    cout << "Попытка зарегистрировать неправильный тип транспортного средства!" << endl;
                }
                break;
            case TRANSPORT_TYPE::BROOM:
                if (raceType == RACE_TYPE::AIR || raceType == RACE_TYPE::MIXED)
                {
                    if (!racerOn[actionNumber - 1])
                    {
                        RacerPushBack(competitors, competitorsNumber, actionNumber);
                        racerOn[actionNumber - 1] = true;
                    }
                    else
                    {
                        system("cls");
                        cout << "Метла уже зарегистрирована!" << endl;
                    }
                }
                else
                {
                    system("cls");
                    cout << "Попытка зарегистрировать неправильный тип транспортного средства!" << endl;
                }
                break;
            case TRANSPORT_TYPE::CAMEL:
                if (raceType == RACE_TYPE::TER || raceType == RACE_TYPE::MIXED)
                {
                    if (!racerOn[actionNumber - 1])
                    {
                        RacerPushBack(competitors, competitorsNumber, actionNumber);
                        racerOn[actionNumber - 1] = true;
                    }
                    else
                    {
                        system("cls");
                        cout << "Верблюд уже зарегистрирован!" << endl;
                    }
                }
                else
                {
                    system("cls");
                    cout << "Попытка зарегистрировать неправильный тип транспортного средства!" << endl;
                }
                break;
            case TRANSPORT_TYPE::CENTAUR:
                if (raceType == RACE_TYPE::TER || raceType == RACE_TYPE::MIXED)
                {
                    if (!racerOn[actionNumber - 1])
                    {
                        RacerPushBack(competitors, competitorsNumber, actionNumber);
                        racerOn[actionNumber - 1] = true;
                    }
                    else
                    {
                        system("cls");
                        cout << "Кентавр уже зарегистрирован!" << endl;
                    }
                }
                else
                {
                    system("cls");
                    cout << "Попытка зарегистрировать неправильный тип транспортного средства!" << endl;
                }
                break;
            case TRANSPORT_TYPE::EAGLE:
                if (raceType == RACE_TYPE::AIR || raceType == RACE_TYPE::MIXED)
                {
                    if (!racerOn[actionNumber - 1])
                    {
                        RacerPushBack(competitors, competitorsNumber, actionNumber);
                        racerOn[actionNumber - 1] = true;
                    }
                    else
                    {
                        system("cls");
                        cout << "Орёл уже зарегистрирован!" << endl;
                    }
                }
                else
                {
                    system("cls");
                    cout << "Попытка зарегистрировать неправильный тип транспортного средства!" << endl;
                }
                break;
            case TRANSPORT_TYPE::FAST_CAMEL:
                if (raceType == RACE_TYPE::TER || raceType == RACE_TYPE::MIXED)
                {
                    if (!racerOn[actionNumber - 1])
                    {
                        RacerPushBack(competitors, competitorsNumber, actionNumber);
                        racerOn[actionNumber - 1] = true;
                    }
                    else
                    {
                        system("cls");
                        cout << "Верблюд-быстроход уже зарегистрирован!" << endl;
                    }
                }
                else
                {
                    system("cls");
                    cout << "Попытка зарегистрировать неправильный тип транспортного средства!" << endl;
                }
                break;
            case TRANSPORT_TYPE::FLYING_CARPET:
                if (raceType == RACE_TYPE::AIR || raceType == RACE_TYPE::MIXED)
                {
                    if (!racerOn[actionNumber - 1])
                    {
                        RacerPushBack(competitors, competitorsNumber, actionNumber);
                        racerOn[actionNumber - 1] = true;
                    }
                    else
                    {
                        system("cls");
                        cout << "Ковёр-самолёт уже зарегистрирован!" << endl;
                    }
                }
                else
                {
                    system("cls");
                    cout << "Попытка зарегистрировать неправильный тип транспортного средства!" << endl;
                }
                break;
            default:
                system("cls");
                cout << "Неверное действие! Повторите снова" << endl;
                break;
            }
        }
    } while (actionNumber);
}
void Racing::RacerPushBack(Transport**& racer, int& racersNumber, int command)
{
    Transport** newCompetitors = new Transport * [++competitorsNumber];
    for (int i = 0; i < competitorsNumber - 1; ++i)
        newCompetitors[i] = racer[i];
    system("cls");
    switch (static_cast<TRANSPORT_TYPE>(command))
    {
    case TRANSPORT_TYPE::OFFROAD_BOOTS:
        newCompetitors[competitorsNumber - 1] = new OffRoadBoots();
        cout << newCompetitors[competitorsNumber - 1]->GetName() << " успешно зарегистрирован! " << endl;
        break;
    case TRANSPORT_TYPE::BROOM:
        newCompetitors[competitorsNumber - 1] = new Broom();
        cout << newCompetitors[competitorsNumber - 1]->GetName() << " успешно зарегистрирован! " << endl;
        break;
    case TRANSPORT_TYPE::CAMEL:
        newCompetitors[competitorsNumber - 1] = new Camel();
        cout << newCompetitors[competitorsNumber - 1]->GetName() << " успешно зарегистрирован! " << endl;
        break;
    case TRANSPORT_TYPE::CENTAUR:
        newCompetitors[competitorsNumber - 1] = new Centaur();
        cout << newCompetitors[competitorsNumber - 1]->GetName() << " успешно зарегистрирован! " << endl;
        break;
    case TRANSPORT_TYPE::EAGLE:
        newCompetitors[competitorsNumber - 1] = new Eagle();
        cout << newCompetitors[competitorsNumber - 1]->GetName() << " успешно зарегистрирован! " << endl;
        break;
    case TRANSPORT_TYPE::FAST_CAMEL:
        newCompetitors[competitorsNumber - 1] = new FastCamel();
        cout << newCompetitors[competitorsNumber - 1]->GetName() << " успешно зарегистрирован! " << endl;
        break;
    case TRANSPORT_TYPE::FLYING_CARPET:
        newCompetitors[competitorsNumber - 1] = new FlyingCarpet();
        cout << newCompetitors[competitorsNumber - 1]->GetName() << " успешно зарегистрирован! " << endl;
        break;
    }
    if (racer != nullptr)
        delete[] racer;
    racer = newCompetitors;
}
void Racing::ShowCompetitors()
{
    if (competitorsNumber)
    {
        cout << "Зарегистрированные транспортные средства: ";
        for (int i = 0; i < competitorsNumber; ++i)
        {
            cout << competitors[i]->GetName();
            if (i != (competitorsNumber - 1))
                cout << ", ";
        }
        cout << endl;
    }
}
void Racing::ShowResult()
{
    system("cls");
    cout << "Результат гонки:" << endl;
    for (int i = 0; i < competitorsNumber; ++i)
    {
        cout << (i + 1) << ". " << competitors[i]->GetName() << ". Время: " << competitors[i]->GetResultTime() << endl;
    }
    cout << endl;
}
void Racing::StartRace()
{
    for (int i = 0; i < competitorsNumber; ++i)
        competitors[i]->RacingTime(distance);
    RacersInsertionSort(competitors, competitorsNumber);
    ShowResult();
    FinishRace();
}
void Racing::RacersInsertionSort(Transport** arr, int size)
{
    for (int i = 1; i < size; ++i)
    {
        Transport* key = arr[i];
        int j = i - 1;

        while (j >= 0 && (*(arr[j]) > *key))
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void Racing::ShowList()
{
    cout << "1. Ботинки-вездеходы" << endl;
    cout << "2. Метла" << endl;
    cout << "3. Верблюд" << endl;
    cout << "4. Кентавр" << endl;
    cout << "5. Орёл" << endl;
    cout << "6. Верблюд-быстроход" << endl;
    cout << "7. Ковёр-самолет" << endl;
    cout << "0. Закончите регистрацию" << endl;
}
void Racing::FinishRace()
{
    for (int i = 0; i < competitorsNumber; ++i)
        delete competitors[i];
    delete[] competitors;
    if (competitors != nullptr)
        competitors = nullptr;

    for (int i = 0; i < 7; ++i)
        racerOn[i] = false;

    competitorsNumber = 0;
    raceType = RACE_TYPE::NO_RACE;
    distance = 0;
}
bool Racing::PlayAgain()
{
    int actionNumber{};
    bool answear{};
    cout << "1. Провести ещё одну гонку" << endl;
    cout << "2. Выйти" << endl;
    do {
        cout << "Введите вариант ответа: ";
        cin >> actionNumber;
        if (actionNumber < 1 || actionNumber > 2)
            cout << "Неверное действие! Повторите снова" << endl;
    } while (actionNumber < 1 || actionNumber > 2);
    answear = (actionNumber == 1) ? true : false;
    system("cls");

    return answear;
}