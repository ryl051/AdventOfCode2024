#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>

using namespace std;

bool isSafeReport(const vector<int>& levels) {
    bool isIncreasing = levels[1] > levels[0];
    for (int i = 1; i < levels.size(); i++) {
        int diff = abs(levels[i] - levels[i - 1]);
        if (diff < 1 || diff > 3) return false;
        if ((levels[i] > levels[i - 1]) != isIncreasing) return false;
    }
    return true;
}

int main() {
    string line;
    int safeCount = 0;

    while (getline(cin, line)) {
        if (line.empty()) break;

        stringstream ss(line);
        vector<int> levels;
        int number;
        while (ss >> number) {
            levels.push_back(number);
        }

        if (levels.size() > 1 && isSafeReport(levels)) {
            safeCount++;
        }
    }

    cout << safeCount << endl;
    return 0;
}
