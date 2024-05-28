//Вы решили пойти в кино с друзьями, но двое из них придирчывые к выбору фильма.Они выдвинули два условия :
//фильм должен быть выпущен позже 1991 года и иметь рейтинг выше 8.2 на
//кинопоиске.Ваша задача — вывести список подходящих фильмов.
#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>

using namespace std;

struct kino {
    string title;
    int publication_year;
    double rating;
};

int main() 
{
    setlocale(LC_ALL, "Rus");
    vector<kino> movies = {
      {"Джуманджи", 2011, 8.3},
      {"Последний раз", 1999, 8.8},
      {"Шрэк", 2001, 8.4},
      {"Кто где и как ", 1994, 8.6},
      {"Бойцовский клуб", 1999, 8.6},
      
    };

    int date = 1991;
    double minR = 8.2;
    vector<kino> sortedMovies;

    // Скопировать фильмы в новый массив изходя из рейтинга и даты релиза.
    copy_if(movies.begin(), movies.end(), back_inserter(sortedMovies), [date, minR](const
        kino& movie) {
            return movie.publication_year > date && movie.rating > minR;
        });

    cout << "Фильмы, опубликованные после " << date << " и с рейтингом выше " << minR << ":" <<
        endl;
    for (const auto& movie : sortedMovies) {
        cout << movie.title << " (рейтинг) " << movie.rating << " (" << movie.publication_year << ")" << endl;
    }

    return 0;
}
