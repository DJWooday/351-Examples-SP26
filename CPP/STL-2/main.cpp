#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> testScores(37, 100);
    cout << testScores.size() << endl;
    cout << testScores.capacity() << endl;

    testScores.push_back(87);
    testScores.insert(testScores.begin()+1, 12);
    testScores.erase(testScores.begin()+2);

    cout << testScores.size() << endl;
    cout << testScores.capacity() << endl;
    return 0;
}