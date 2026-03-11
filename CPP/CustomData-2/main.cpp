#include <iostream>
using namespace std;

typedef int boolean;
boolean False = 0;
boolean True = 1;

enum booleanE {FALSE, TRUE};
enum controllerType {GAMEPAD=3, MKB=0, VR=9};

struct movie {
    string title;
    int year;
    string cast[20];
} swissArmyMan;

struct buddy {
    string name;
    movie favMovie;
};

void printMovie(movie m) {
    cout << m.title << ", " << m.year << endl;
}

void changeMovieYear(movie& m, int year) {
    m.year = year;
}

void changeMovieYear(movie* m, int year) {
    //(*m).year = year;
    m->year = year;
}

union weight {
    float inTons;
    int inPounds;
    long long inOunces;
};

double pi = 3.14159265358979323846;

void foo() {
    static int x = 1;
    int y = 1;
    cout << ++x << ", " << ++y << endl;
}

void bar() {
    static int x = 1;
}

int main() {

    foo();
    foo();
    foo();
    foo();

    weight elephant;
    elephant.inTons = 6.7;
    cout << elephant.inTons << endl;
    elephant.inPounds = 341343265;
    cout << elephant.inPounds << endl;
    cout << elephant.inTons << endl;
    cout << sizeof(elephant) << endl;

    buddy matthew;
    matthew.name = "Matthew";
    matthew.favMovie.title = "End Game";
    matthew.favMovie.year = 1;
    changeMovieYear(matthew.favMovie, 2019);

    movie eeaao;
    movie death;
    cout << swissArmyMan.year << endl;
    cout << death.year << endl;
    cout << eeaao.year << endl;

    swissArmyMan.title = "Swiss Army Man";
    swissArmyMan.year = 2015;

    eeaao.title = "Everything Everywhere";
    eeaao.year = 2022;
    changeMovieYear(eeaao, 1999);

    movie movies[] = { eeaao, death };

    movie* m = new movie("Infinity War", 2020);
    changeMovieYear(m, 2018);
    printMovie(*m);
    delete m;

    printMovie(eeaao);

    boolean e = 3;
    booleanE alive = FALSE;

    controllerType control = MKB;
    cout << control << endl;

    switch (control) {
        case GAMEPAD:
            break;
        case MKB:
            break;
        case VR:
            break;
    }


    int a[] = {1,2,3,4,5,6,7,8,9};

    int i = 100;
    int x, y;
    {
        int temp = x;
        x = y;
        y = temp;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}