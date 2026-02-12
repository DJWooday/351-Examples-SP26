#include <iostream>
using namespace std;

int main() {
    int jason = 67;
    int *ryan = &jason;
    cout << *ryan << endl;

    int caylei = 67;
    int* zachary = &caylei;
    cout << *zachary << endl;

    cout << *zachary + *ryan << endl;

    char vilarion = 'w';
    char* nick = &vilarion;
    cout << *nick << endl;

    int** quinton = &zachary;
    cout << *quinton << " " << &caylei << endl;

    int bailor=420, ryanS=69, thomas=80085;
    int funnyNumbers[] = {bailor, ryanS, thomas};
    int* claire = funnyNumbers;
    cout << *(claire+3) << endl;

    int paul = 1337, natalie = 666;
    int *megan = new int[2] {paul, natalie};
    cout << *(megan+1) << endl;

    int** alex = &claire;
    cout << *(*alex+1) << endl;

    alex = &megan;


    alex = &megan;
    cout << *(*alex+1) << endl;
}