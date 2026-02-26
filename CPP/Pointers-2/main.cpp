#include <iostream>
using namespace std;

void printArray(float* arr, int length) {
    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void smoothArray(float*& img, int length) {
    float* npixels = new float[length];
    npixels[0] = (img[0] + img[1]) / 2;
    npixels[4] = (img[3] + img[4]) / 2;
    for (int i = 1; i < 4; i++) {
        npixels[i] = (img[i - 1] + img[i] + img[i+1]) / 3;
    }

    delete[] img;
    img = npixels;
}

int glob = 10;
int *globptr = new int(5);

int main() {
    int x = 7;
    int *xPtr = new int(9);

    cout << &glob << endl;
    cout << &globptr << endl;
    cout << &*globptr << endl;
    cout << endl;
    cout << &x << endl;
    cout << &xPtr << endl;
    cout << &*xPtr << endl;

    char A = 'A';
    int i = 4325523534;
    void* v = &A;
    v = &i;

    cout << *(char*)v << endl;

    // float opixels[] = {250, 180, 55, 0, 108}; // static
    float* opixels = new float[5](250, 180, 55, 0, 108); //dynamic

    float* image = opixels;
    printArray(image, 5);
    smoothArray(image, 5);
    printArray(image, 5);



    int jason = 67;
    int* brett = &jason;
    cout << *brett << endl;

    int nathan = 25;
    int* philip = &nathan;
    cout << *philip << endl;

    char edwin = 'E';
    char* brannon = &edwin;
    cout << *brannon << endl;

    int** dax = &philip;
    cout << **dax << " " << &nathan << endl;

    int jailon=420, zach=69, royce=80085;
    int funnyNumbers[] = {jailon,zach,royce};
    int* noah = funnyNumbers;
    cout << *(noah+2) << endl;

    int colton=1337, cameron=666;
    int* madison = new int[2]{colton, cameron};
    cout << *(madison+1) << endl;

    int** beau = &madison;
    cout << *(*beau+1) << endl;


}