/*
Задан список баллов по предмету 
найти сумму всех баллов с учетом баллов по ргр 

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    vector<int> numbers = { 10, 10, 10, 10, 10, 10, 10};

    // Найдем сумму всех чисел в векторе
    int sum = 0;
    sum = accumulate(numbers.begin(), numbers.end(), 0);

    // Вывод сумму на экран
    cout << "Сумма за все задания " << sum << endl;
    // Умная все баллы на ргр
    double otv = sum * 0.3;
    cout << "Сумма c учетом ргр " << otv << endl;
    // Сумма за весь предмет
    double ves_predmet = sum + otv;
    cout << "Сумма за весь предмет " << ves_predmet << endl;
    return 0;
}
