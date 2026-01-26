#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
    cout << fixed << setw(15) << "Budget Item" << setw(8) << "Price" << endl;;
    cout << setprecision(2) << setw(15) << "Groceries" << setw(8) << 150.0 << endl;
    cout << setprecision(2) << setw(15) << "Candles"  << 300.0;

    int hoursWorked;
    float hourlyPay, taxRate = .15f;

    /*
    cout << "\n\nEnter hours worked & hourly pay: ";
    cin >> hoursWorked;
    cin.ignore(1000, '\n');
    cin >> hourlyPay;

    cout << (hourlyPay * hoursWorked * (1-taxRate));
    */

    /*
    cout << "\nWelcome to Taco Bell, place order: \n->";
    string orderString;
    getline(cin, orderString, ',');
    cout << "You wanted " << orderString << ", right?" << endl;
    */

    char input;
    cout << "Make your move: ";
    cin >> input;

    int day, month, year;
    cout << "\nEnter your bday for taco bell rewards\nmm/dd/yyyy";
    string bdayline;
    getline(cin, bdayline);
    stringstream ss = stringstream(bdayline);
    string temp;
    getline(ss, temp, '/');
    stringstream(temp) >> month;
    getline(ss, temp, '/');
    stringstream(temp) >> day;
    getline(ss, temp, '/');
    stringstream(temp) >> year;

    cout << "Okay we'll send you free crunchwrap surpries on " << month << " " << day;

    //cout << bdayline;
}