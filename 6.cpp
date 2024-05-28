/*Есть группа студентов и их суммарные оценки за семестр
 по стобалльной системе. Необходимо преобразовать оценки
 в пятибальную систему.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct stud {
    string fio;
    int ball;
};

void pereobrozovanie(vector<stud>& students) {
    for (auto b= students.begin(); b != students.end(); ++b) {
        if (b->ball  >= 84) {
            b->ball = 5;
        }
        else if (b->ball >= 73) {
            b->ball = 4;
        }
        else if (b->ball >= 50) {
            b->ball = 3;
        }
        else {
            b->ball = 0;
        }
    }
}

int main() {
    vector<stud> students = {
        {"Михайлов П.Ф", 90}, {"Бурлаков И.Е", 75}, {"Кошкин К.Е", 63}, {"Власова К.Е ", 44} };

    pereobrozovanie(students);

    for (auto student : students) {
        cout << student.fio << ": " << student.ball << endl;
    }

    return 0;
}
