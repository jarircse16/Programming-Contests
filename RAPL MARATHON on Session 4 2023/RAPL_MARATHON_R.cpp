#include<bits/stdc++.h>
using namespace std;

bool is_dance_possible(const vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n; ++i) {
        int current = i + 1;
        deque<int> clockwise, counterclockwise;

        for (int j = 0; j < n; ++j) {
            clockwise.push_back(arr[(i + j) % n]);
            counterclockwise.push_back(arr[(i - j + n) % n]);
        }

        if (is_sorted(clockwise.begin(), clockwise.end()) || is_sorted(counterclockwise.begin(), counterclockwise.end())) {
            return true;
        }
    }

    return false;
}

int main() {
    int q;
    cin >> q;

    while (q--) {
        int n;
        cin >> n;

        vector<int> array_indices(n);
        for (int i = 0; i < n; ++i) {
            cin >> array_indices[i];
        }

        bool result = is_dance_possible(array_indices);

        if (result) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
