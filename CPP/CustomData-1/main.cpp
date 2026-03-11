#include <iostream>
using namespace std;
// typedef
typedef int boolean;
const boolean True = 0;
const boolean False = 1;
const boolean qTrue = 2;

namespace NewMath {
    const double PI = 3.141592653589;
}

// enums
enum booleanE {TRUE, FALSE};
enum controllerType {GAMEPAD=0, MKB=10, VR=20};

double pi = 3.141592653589;

// structs
struct movie {
    string title;
    int year;
    string cast[20];
} swissArmyMan;

struct buddy {
    string name;
    movie favoriteMovie;
};

void printMovie(movie m) {
    std::cout << m.title << ", " << m.year << endl;
}

void changeMovie(movie m, int year) {
    m.year = year;
}

void changeMovie(movie* m, int year) {
    m->year = year;
}

union weight {
    float inTons;
    int inPounds;
    long long inOunces;
};

void foo() {
    static int x = 1;
    int y = 1;
    cout << ++x << ", " << ++y << endl;
}

int main() {
    //region stuff
    int alive;
    alive = 1;
    if (alive == 0);


    int* i = new int(80);
    char* c = new char('c');
    void* vp;
    vp = i;
    //vp = c;
    cout << *(char*)vp << endl;

    string* s = 0;
    //endregion

    NewMath::PI;
    // switch statement for enum
    controllerType control;
    control = VR;
    cout << control << endl;
    switch (control) {
        case 0:
            break;
        case 1:
            break;
        case 2:
            break;
    }


    // declaration of movies
    movie eeaao;
    cout << swissArmyMan.year << endl;
    cout << eeaao.year << endl;

    swissArmyMan.title = "Swiss Army Man";
    swissArmyMan.year = 2016;

    eeaao.title = "Everything Everywhere";
    eeaao.year = 2022;
    changeMovie(eeaao, 1999);

    int* p = new int;
    movie* sorcerers = new movie();

    sorcerers->title = "Harry Potter and the Sorcerer's Stone";
    sorcerers->year = 2001;

    changeMovie(sorcerers, 1999);

    movie movies[] = {swissArmyMan, eeaao};

    printMovie(swissArmyMan);
    printMovie(movies[1]);
    printMovie(*sorcerers);

    cout << sizeof(movie) << endl;

    buddy* Matthew = new buddy;
    Matthew->name = "Matthew";
    // Matthew->favoriteMovie = new movie;
    // Matthew->favoriteMovie->title = "Avengers End Game";
    // Matthew->favoriteMovie->year = 2010;
    Matthew->favoriteMovie.title = "End game";

    weight elephant;
    elephant.inTons = 2.5;
    cout << elephant.inTons << endl;
    elephant.inOunces = 5432154321132435432;
    cout << elephant.inOunces << endl;
    cout << elephant.inTons << endl;

    cout << sizeof(elephant) << endl;

    const int j=100;
    for (int j = 0; j < 10; j++) {
        cout << j << endl;
    }

    {
        int temp;

    }

    return 0;
}