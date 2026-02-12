#include <cmath>
#include <iostream>
using namespace std;

// Function for printing grid


float dist(float x1, float y1, float x2=0, float y2=0) {
    return std::sqrt(std::pow(x1 - x2, 2) + std::pow(y1 - y2, 2));
}

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
void mySwap(int&, int&);

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

//reference type max func
auto& maxAlias(double &a, double& b) {
    return a > b ? a : b;
}

template <typename Swappable, typename SwappableB>
void swapThese(Swappable& x, SwappableB& y) {
    Swappable temp = x;
    x = y;
    y = temp;
}

int main() {
    int as = 5, bs = 10;
    swapThese<int>(as, bs);
    cout << as << " " << bs << endl;

    float af = 5.9, bf = 10.9;
    swapThese(af, bf);
    cout << af << " " << bf << endl;

    float ts[] = {57, 87, 60, 89, 11};
    for (float& score : ts) {
        score += 10;
    }
    printArray(ts, 5);

    double play1 = 10.4, play2 = 3.7;
    double& alias = maxAlias(play1, play2);
    alias *= 2;
    cout << play1 << endl << play2 << endl;

    cout << distance(5, 5, 1, 2) << endl;
    float p1[] = {5, 5};
    float p2[] = {1, 2};
    cout << distance(p1, p2) << endl;

    changeArray(p2, 2);
    printArray(p2, 2);
    cout << endl;

    cout << (sizeof(p2) / sizeof(float)) << endl;

    //reference type


    cout << endl << endl;
    int a = 5, b = 10;
    cout << a << " " << b << endl;
    mySwap(a, b);
    cout << a << " " << b << endl;

    cout << "Distance: " << dist(5,5) << endl;

    // Array of test scores with correct access, undershoot, and overshoot
    int testScores[5] = {95, 45, 88, 78, 91};
    testScores[6] = 100;
    cout << testScores[-1] << endl;
    for (int i = 0; i <= 10; i++)
        cout << testScores[i] << " " << endl;

    // Accidental loop past the end of array

    // Inline initialization of an array
    // int playGrid[10][10] = {{}};
    // cout << playGrid[0] << " " << playGrid[1] << endl;
    //
    // // A look at multidimensional arrays with a single d
    int rows=3, cols=7;
    int px = 5, py = 2;
    // // initialize 2d array (oops can't init inline)
    char twod[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            twod[i][j] = '0';
        }
    }

    // // initialize a 1d array (oops still can't inline)
    char oned[rows*cols];
    for (int i = 0; i < rows*cols; i++)
        oned[i] = '0';


    // // draw 2d with double loop
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << twod[row][col] << " ";
        }
        cout << endl;
    }
    //
    cout << endl;
    //
    // //draw 1d with double loop
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << oned[row * cols + col] << ' ';
        }
        cout << endl;
    }
    cout << endl;

    //
    // // set playerpos for twod and 1d
    twod[py][px] = '1';
    oned[py*cols + px] = '1';
    //
    // // print 1d with single loop
    for (int i = 0; i < rows * cols; i++) {
        if (i > 0 && i % cols == 0) cout << endl;
        cout << oned[i] << " ";
    }
    //
    cout << endl;
    // // print 2d with single loop
    for (int i = 0; i < rows * cols; i++) {
        if (i % cols == 0) cout << endl;
        cout << twod[i/cols][i%cols] << ' ';
    }

    oned[py*cols+px] = '0';
    py--;
    oned[py*cols+px] = '1';
    cout << endl;
    for (int i = 0; i < rows * cols; i++) {
        if (i > 0 && i % cols == 0) cout << endl;
        cout << oned[i] << " ";
    }

}


// Function for swap
void mySwap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}