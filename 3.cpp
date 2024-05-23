/*На лекции по теорие вероятности пришла проверка с военкомата
есть список с студентами 
всех кто не достиг призывного возраста убрать из списка 
найти самого молодого и самого старшего студента и вручить ему повестку*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct Prizivnik {
    string fio;
    int age;
};

int main() {
    setlocale(LC_ALL, "Rus");
    vector<Prizivnik> priziv = 
    {
        {"Бурлаков И Е", 21},
        {"Аксенов Н Е", 23,},
        {"Клаус В Е", 18},
        {"Тятюшкин М", 18},
        {"Кошкин К О", 16},
        {"Романенко В М", 20},
        {"Святкой Д М", 15},
        {"Рыгзынов Ч О", 17},

    };
    priziv.erase(remove_if(priziv.begin(), priziv.end(),
        [](const Prizivnik& p) {
            return p.age < 16;
        }));

    if (!priziv.empty()) 
    {
        auto youngest = *min_element(priziv.begin(), priziv.end(),
            [](const Prizivnik& a, const Prizivnik& b)
            { return a.age < b.age; });

        auto oldest = *max_element(priziv.begin(), priziv.end(),
            [](const Prizivnik& a, const Prizivnik& b)
            { return a.age < b.age; });

        cout << "Самый молодой призывник: " << youngest.fio << " Его возраст: " << youngest.age << endl;
        cout << "Самый старший призывник: " << oldest.fio << " Его возраст: " << oldest.age << "\nЗдравствуй юность в сопогах =)" << endl;
    }
    else 
    {
        cout << "После фильтрации не осталось ни одного участника" << endl;
    }

    return 0;
}
