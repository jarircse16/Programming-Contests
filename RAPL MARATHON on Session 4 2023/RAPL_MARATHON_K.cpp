#include <iostream>

using namespace std;

int main() {
    int t, n, x;
    cin >> t;

    while (t--) {
        cin >> n >> x;
        int base_apartment = 2, floor_number = 1;

        while (base_apartment < n) {
            base_apartment += x;
            floor_number++;
        }

        cout << floor_number << endl;
    }

    return 0;
}
