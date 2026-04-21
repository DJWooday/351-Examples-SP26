#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> testScores(37, 50);
    cout << sizeof(testScores) << endl;
    testScores[0] = 0;
    testScores[36] = 100;
    testScores.push_back(96);
    testScores.insert(testScores.begin() + 16, 89);
    cout << testScores[36] << endl;
    cout << testScores.size() << endl;
    cout << testScores.capacity() << endl;
    cout << sizeof(testScores) << endl;
    return 0;
}