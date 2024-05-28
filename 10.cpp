/*
Есть список баллов по всем предметам 
нужно посчитать средний балл студента

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;


int main() {
    setlocale(LC_ALL, "Rus");
    vector<int> grades = { 85, 92, 78, 88, 95 };

    // Подсчитаем средний балл
    double average = 0.0;
    if (!grades.empty()) {
        average = static_cast<double>(accumulate(grades.begin(), grades.end(), 0)) / grades.size();
    }

    // Выведем средний балл на экран
   cout << "Средний балл студента " << average << endl;

    return 0;
}
