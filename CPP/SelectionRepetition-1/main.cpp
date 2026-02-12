#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Get health int and check for color with ifs
    /*int health;
    cin >> health;
    if (health < 25) cout << "red" << endl;
    else if (health < 50) cout << "yellow" << endl;
    else if (health < 100) cout << "green" << endl;*/

    // Increment float xpos til landmine to show float comparison

    /*float xpos = .5;
    float landMinePos = 5;
    float threshold = .001;
    while (true) {
        xpos = xpos + .01;
        if (fabs(landMinePos - xpos) <= threshold) {
            cout << "Kaboom" << endl;
            break;
        }
        if (xpos > 10)
            break;
    }*/

    // Input processing with switch statement
    /*
    char input;
    cin >> input;

    switch (input) {
        case 'W':
            input -= 26;
        case 'w':
            cout << "Move Up";
            break;
        case 'a':
            cout << "Move Left";
            break;
        default:
            cout << "Bad input";
            break;
    }
    */
    // Alive check with various health statements
    /*int health;
    cin >> health;
    bool alive;
    alive = health < 0 ? false : true;
    alive = health > 0;

    cout << alive;
    */

    // For loop going through string name
    string name = "Jason";
    for (int i = 0; i < name.length(); i++)
        cout << name[i]  << endl;

}