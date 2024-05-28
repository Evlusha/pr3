
//Вас отправили в магазин за стульями для комнат в общежитие ,
//из за того, что вы плохо учили информатику пришлось позвать таких-же рабочих как и вы,
//но в процессе они сбились со счёта и сколько каких сутльев 
//вы купили вы не знаете.Необходимо посчитать сколько у вас стульев
//удобных и не удобных.
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <random>

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    // Инициализация генератора случайных чисел
    random_device rd;
    mt19937 gen(rd());


    // Определение цветов
    vector<string> chair = { "Удобный стул", "Не удобный стул" };
    vector<string> chairs(200);

    for (int i = 0; i < 200; i++) {
        int index = gen() % 2; // Генерируем случайный индекс от 0 до 2
        chairs.push_back(chair[index]);
    }
    // Подсчет количества каждого цвета
    int good_chair = count(chairs.begin(), chairs.end(), "Удобный стул");
    int not_good_chair = count(chairs.begin(), chairs.end(), "Не удобный стул");
  

    // Вывод результатов
    cout << "Удобный стул: " << good_chair << endl;
    cout << "Не удобный стул: " << not_good_chair << endl;
 

    return 0;
}
