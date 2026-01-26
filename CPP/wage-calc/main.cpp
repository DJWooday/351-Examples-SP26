#include <iostream>
#include <string>
using namespace std;
#define HOURLY_RATE 10.5

//const float HOURLY_RATE = 10.5;
unsigned short hoursWorked = 25;
float taxRate = .18;
char message[] = "You have made: " ;

int main() {
    string myName = "Jason";
    string yourName = myName;
    cout << (yourName == myName) << endl;
    yourName[0] = 'M';
    cout << (yourName == myName) << endl;

    float totalPay = hoursWorked * HOURLY_RATE * (1-taxRate);
    cout << message << totalPay << endl;

    cout << sizeof(taxRate) << endl;
}