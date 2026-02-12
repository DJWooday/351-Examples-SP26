#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;

float dist(float x1, float y1, float x2=0, float y2=0) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

// Function for printing grid
void PrintGrid() {

}

// Function for swap
void mySwap(int&, int&);

void even(int);
void odd(int y)
{
    if ((y % 2) != 0) cout << "Odd";
    else even(y);
}
void even(int x)
{
    if ((x % 2) == 0) cout << "Even";
    else odd(x);
}

//Overloading funcs for operate

//Overloading funcs for distance
float distance(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2- x1, 2) + pow(y2- y1, 2));
}
float distance(float p1[], float p2[]) {
    return sqrt(pow(p2[0]- p1[0], 2) + pow(p2[1]- p1[1], 2));
}

void printArray(float arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

void changeArray(float arr[], int n) {
    for (int i = 0; i < n; i++)
        arr[i] = arr[i] * 2;
}

//reference type function
double& maxAlias(double& a, double& b) {
    return a > b ? a : b;
}
// secret band

template <typename Swappable>
void swapAny(Swappable& x, Swappable& y) {
    Swappable temp = x;
    x = y;
    y = temp;
}


int main() {
    int ai = 5, bi = 10;
    swapAny<int>(ai, bi);
    cout << ai << ", " << bi << endl;

    float af = 5.9, bf = 10.7;
    swapAny(af, bf);
    cout << af << ", " << bf << endl;

    float ts[] = {57, 89, 77, 59, 22};
    for (float& score : ts) {
        score += 10;
    }
    printArray(ts, 5); cout << endl;

    double p1S = 9.2, p2S = 5.8;
    auto& alias = maxAlias(p1S, p2S);
    alias *= 2;
    cout << alias << " " << p1S << endl;

    float x1=5, y1=5, x2=1, y2=2;
    cout << distance(x1, y1, x2, y2) << endl;

    float point1[] = {x1, y1};
    float point2[] = {x2, y2, 5, 234, 112};

    cout << distance(point1, point2) << endl;

    changeArray(point2, 5);
    printArray(point2, 5); cout << endl;
    //reference type alias augmentation

    cout << sizeof(point2) / sizeof(float) << endl;

    cout << "\n\n\n\n";
    int a = 5; int b = 10;
    cout << a << " " << b << endl;
    mySwap(a, b);
    cout << a << " " << b << endl;

//region 2DArrays
    cout << "Distance: " << dist(5, 5) << endl;
    // Array of test scores with correct access, undershoot, and overshoot
    int testScores[5] = {95, 34, 88, 7, 85};
    testScores[1] = 100;
    for (int i = 0; i <= 5; i++) {
        cout << testScores[i] << " " << endl;
    }

    // Accidental loop past the end of array

    // Inline initialization of an array

    // A look at multidimensional arrays with a single d
    int rows=3, cols=5;
    int px = 2, py = 1;
    // initialize 2d array (oops can't init inline)
    char twod[rows][cols];
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            twod[row][col] = '0';
        }
    }

    // initialize a 1d array (oops still can't inline)
    char oned[rows*cols];
    for (int i = 0; i < rows*cols; i++) {
        oned[i] = '0';
    }

    cout << endl;
    // draw 2d with double loop
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << twod[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;
    //draw 1d with single loop
    for (int i = 0; i < rows*cols; i++) {
        cout << oned[i] << " ";
        if (i % cols == cols-1)
            cout << endl;
    }

    // set playerpos for twod and 1d

    twod[py][px] = '1';
    int playerPos = 7;
    playerPos = playerPos - cols;
    oned[playerPos] = '1';

    px++;
    cout << endl;
    // print 1d with double loop
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << oned[row*cols + col] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // print 2d with single loop
    for (int i = 0; i < rows*cols; i++) {
        cout << twod[i/cols][i%cols] << " ";
        if (i % cols == cols-1) cout << endl;
    }
    //endregion
}

void mySwap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}