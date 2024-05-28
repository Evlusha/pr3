//Есть таблица баллов по предмету 
//после завершения всех работ они умножаються на 3 
//найти максимальный балл



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");

    vector<int> numbers = { 5, 8, 3, 21, 2  };

    // Умножим каждый элемент вектора на 3
    vector<int>::iterator it;
    for (it = numbers.begin(); it != numbers.end(); ++it) {
        *it *= 3;
    }

    // Выведем измененные значения на экран
   cout << "Все измененные баллы:" << endl;
    for (const auto& num : numbers) {
       cout << num << " ";
    }
    cout << endl;

    // Найдем максимальный элемент вектора
    int max_element = *std::max_element(numbers.begin(), numbers.end());

    // Выведем максимальный элемент на экран
   cout << "Максимальный балл: " << max_element << endl;

    return 0;
}
