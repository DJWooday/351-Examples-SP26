#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << setw(15) << "Budget Item" << setw(8) << "Price" << endl;
    cout << setw(15) << "Groceries" << setw(8) << 150 << endl;
    cout << setw(15) << "Candles" << setw(8) << showpoint << 65.0 << endl;

    cout << setprecision(2) << 3.1495623 << endl;
    cout << fixed << setprecision(2) << 3.1495623 << endl;

    /*
    float hourlyPay, taxRate, pay;
    int hoursWorked;
    cout << "Enter hours, taxRate, hourlyPay: ";
    cin >> hoursWorked; cin.ignore(1000, '\n');
    cin >> taxRate; cin.ignore(1000, '\n');
    cin >> hourlyPay;

    pay = hourlyPay * hoursWorked * (1-taxRate);
    cout << pay << endl;
    */
/*
    cout << "Welcome to taco bell, place your order: ";
    string orderString;
    getline(cin, orderString, ',');

    cout << "You wanted: " << orderString << ", right?" << endl;
*/

    cout << "Give bday for Tbell rewards program:\nmm/dd/yyyy ->";
    string bdaystring;
    getline(cin,bdaystring);
    stringstream ss = stringstream(bdaystring);

    int day, month, year;
    string temp;
    getline(ss, temp, '/');
    stringstream(temp) >> month;
    getline(ss, temp, '/');
    stringstream(temp) >> day;
    getline(ss, temp, '/');
    stringstream(temp) >> year;

    cout << month << " " << day << " " << year << endl;

}