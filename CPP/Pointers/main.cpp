#include <iostream>
using namespace std;


void printArray(float* arr, int length) {
    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void smoothArray(float*& img, int length) {
    float* nPixel = new float[length];
    nPixel[0] = (img[0] + img[1]) / 2;
    nPixel[4] = (img[4] + img[3]) / 2;
    for (int i = 1; i < 4; i++) {
        nPixel[i] = (img[i - 1] + img[i] + img[i+1]) / 3;
    }

    delete[] img;
    img = nPixel;
    printArray(img, 5);
}

float glob;
float* globptr;

int main() {
    int loc = 1;
    float* locptr = new float(3);
    int loc2 = 0;
    float* locptr2 = new float(3);

    cout << &glob << endl;
    cout << &globptr << endl;
    cout << &loc << endl;
    cout << &locptr << endl;
    cout << &loc2 << endl;
    cout << &locptr2 << endl;
    cout << &(*locptr) << endl;


    float oPixel[] = {255, 160, 85, 90, 108};
    float* image = oPixel;
    printArray(image, 5);
    cout << image << endl;
    smoothArray(image, 5);
    cout << image << endl;
    printArray(image, 5);

    delete[] image;



    cout << "\n\n\n";
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