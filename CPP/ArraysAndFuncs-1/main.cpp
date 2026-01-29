#include <iostream>
using namespace std;

// Function for printing grid

// Function for swap

int main() {
    // Array of test scores with correct access, undershoot, and overshoot

    // Accidental loop past the end of array

    // Inline initialization of an array
    int playGrid[10][10] = {{}};
    cout << playGrid[0] << " " << playGrid[1] << endl;

    // A look at multidimensional arrays with a single d
    int rows=3, cols=5;
    int px = 2, py = 1;
    // initialize 2d array (oops can't init inline)
    char twod[rows][cols];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            twod[i][j] = '0';

    // initialize a 1d array (oops still can't inline)
    char oned[rows*cols];
    for (int i = 0; i < rows*cols; i++)
        oned[i] = '0';

    // draw 2d with double loop
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << twod[i][j] << ' ';
        cout << endl;
    }

    cout << endl;

    //draw 1d with double loop
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << oned[i*cols + j] << ' ';
        cout << endl;
    }

    // set playerpos for twod and 1d
    twod[py][px] = '1';
    oned[py*cols + px] = '1';

    // print 1d with single loop
    for (int i = 0; i < rows*cols; i++) {
        if (i % cols == 0)
            cout << endl;
        cout << oned[i] << ' ';
    }

    cout << endl;
    // print 2d with single loop
    for (int i = 0; i < rows*cols; i++) {
        if (i % cols == 0) cout << endl;
        cout << twod[i/cols][i%cols] << ' ';
    }
}