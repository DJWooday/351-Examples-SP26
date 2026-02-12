#include <iostream>
using namespace std;

int main() {
    char input;

    do {
        cout << "Make your move: ";
        cin >> input;
        switch (input) {
            case 'W':
            case 'w':
                cout << "Move up";
                break;
            case 'A':
            case 'a':
                cout << "Move left";
                break;
        }
    } while (input != 'q');
}