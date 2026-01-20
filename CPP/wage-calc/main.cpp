#include <iostream>
using namespace std;

const float HOURLY_RATE = 10.5;
unsigned short hoursWorked = 25;
float taxRate = .18;
char message[] = "You have made: ";

int main() {
    float totalPay = hoursWorked * HOURLY_RATE * (1-taxRate);
    cout << message << totalPay << endl;
}