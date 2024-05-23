
/*на паре по программированию были 2 гурппы 
преподователь сказал "у какой группы больше всего попыток при сдаке коллоквиума то та группа будет расвормирована и отчислина"
найти ту группу которая больше всего потратила поппыток на сдачу коллоквиума    
*/

#include <vector>
#include <numeric>
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
   
    vector<int> abs324 = { 3, 5, 19, 0, 0, 11, 2, 1, 15, 20  };
    vector<int> abs322 = {11, 4, 2, 5, 6, 9, 2, 7, 6, 8, 20  };

    int resabs324 = accumulate(abs324.begin(), abs324.end(), 0);
    int resabs322 = accumulate(abs322.begin(), abs322.end(), 0);

    if (resabs324 > resabs322) {
        cout << "АБс-324 проиграл с" << resabs324 << " попытками";
    }
    else if (resabs322 > resabs324) {
        cout << "АБс-322 проиграл с " << resabs322 << " попытками";
    }
    else {
        cout << "У классов одно и то же количество баллов, победила дружба";
    }

    return 0;
}
