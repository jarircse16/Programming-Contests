#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; ++i) {
        int n;
        cin >> n;

        int _death_wish = 0;
        for (int j = 0; j < n; ++j) {
            int x;
            cin >> x;
            _death_wish += (x % 2 == 1);
        }

        cout << ((_death_wish == 0 || _death_wish == n) ? "YES" : "NO") << endl;
    }

    return 0;
}
