#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Get health int and check for color with ifs
    // int health;
    // cin >> health;
    //
    // if (health < 25) cout << "red" << endl;
    // else if (health < 50) cout << "yellow" << endl;
    // else if (health < 100) cout << "green" << endl;

    // Increment float xpos til landmine to show float comparison
    // float xpos = .5, landminePos = 10;
    // float threshold = .001;
    // while (true) {
    //     xpos += .01;
    //     if (fabs(xpos - landminePos) < threshold) {
    //         cout << "Kaboom" << endl;
    //         break;
    //     }
    //     if (xpos > 15) {cout << "still gottem (legs)"; break; }
    // }
    // cout << xpos << endl;

    // Input processing with switch statement
    // char input;
    // cin >> input;
    //
    // switch (input) {
    //     case 'A':
    //         input = tolower(input);
    //     case 'a':
    //         cout << "Move Left" << endl;
    //         break;
    //     case 'w':
    //         cout << "Move Up" << endl;
    //         break;
    //     default:
    //         cout << "Bad Input" << endl;
    //         break;
    // }

    // Alive check with various health statements
    // int x, y;
    // cin >> x;
    // y = x > 0 ? x : -x;
    // cout << y;
    //
    // int health, numLives = 1;
    // cin >> health;
    // bool alive;
    // alive = (health <= 0 || numLives <= 0) ? false : true;
    // cout << alive;



    // For loop going through string name


    // do while loop
    char input;

    do {
        cout << "Gimme imput: ";
        cin >> input;
        switch (input) {
            case 'a':
                cout << "Move left" << endl;
                break;
            case 'w':
                cout << "Move up" << endl;
                break;
        }
    } while (input != 'q');


}