#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int tc = 0; tc < testCases; ++tc) {
        int a, b, c;
        cin >> a >> b >> c;

        cout << (a < c ? 1 : -1) << " ";
        cout << (c < a * b ? b : -1) << endl;
    }

    return 0;
}
