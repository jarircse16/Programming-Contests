#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        // Calculate the floor Petya lives on
        int floor = (n - 1) / x + 1;

        cout << floor << endl;
    }

    return 0;
}
