#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct NumberPosition {
    int value, position;

    bool operator<(const NumberPosition& other) const {
        return value < other.value;
    }
};

int main() {
    int n, x;
    cin >> n >> x;

    vector<NumberPosition> numbers(n);

    for (int i = 0; i < n; ++i) {
        cin >> numbers[i].value;
        numbers[i].position = i + 1;  // Adjust positions to start from 1
    }

    // Sort the array based on values
    sort(numbers.begin(), numbers.end());

    // Two-pointer approach to find the pair with sum x
    int left = 0, right = n - 1;

    while (left < right) {
        int currentSum = numbers[left].value + numbers[right].value;

        if (currentSum == x) {
            cout << numbers[left].position << " " << numbers[right].position << "\n";
            return 0;
        } else if (currentSum < x) {
            ++left;
        } else {
            --right;
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}
