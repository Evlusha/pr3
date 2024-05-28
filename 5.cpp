/*Вова решил посмеяться над инфобезом и дал им загадку с реверсироваными словами
Необходимо реверсировать слова в строке не изменяя порядок слов и ответить на загадку */

#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    string sentence = "атЭ ьщев ончыбо тисев в мотсуп екиньлидолох и юе язьлен ясьтавозьлоп ан 1 екиткарп ";
    istringstream iss(sentence);
    string word;
    string result;
    string vopros = "Мышь";
    while (iss >> word) {
        reverse(word.begin(), word.end());
        result += word + " ";
    }
   
    cout << "\nРеверсированные слова:\n " << result;
    cout << "\nВашь ответ ? \n" ;
    string otv;
    cin >> otv;
    if (vopros == otv)
    {
        cout << "Вы гений ";
    }
    else
    {
        cout << " Ты пытался (";
    }

}
