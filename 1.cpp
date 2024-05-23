/*

Задан список опоздавших нужно найти всех опоздавших
и отчислить


*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Motherboard {
    string fio;
    string groupp;
    int timeMin;
};

int main() {
    setlocale(LC_ALL, "Rus");
    vector<Motherboard> motherboards = {
        {"Бурлаков", "АБС-324", -1},
        {"Деревянкин", "АБС-324", 0},
        {"Клаус", "АБС-324", -15},
        {"Аксенов", "АБС-324", 7},
        {"Тятюшкин", "АБС-324", 20},
        {"Михайленко", "АБС-324", 13},
        {"Рожкова", "АБС-324", 8},
        {"Мокрушин", "АБС-324", 17},
        
    };
    vector<Motherboard> result;
    copy_if(motherboards.begin(), motherboards.end(), back_inserter(result),
        [](const Motherboard& mb) {
            return  mb.groupp == "АБС-324" and mb.timeMin > 0 ;
        });
    for (const auto& mb : result) {
        cout << "Отчислен " << mb.fio << " " << mb.groupp << "По причине опоздания на" << " " << mb.timeMin << " минут" << endl;
    }
}
