#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test_case = 1, n, x;
    for (int t = 1; t <= test_case; t++) {
        cin >> n >> x;
        int weight[n];
        for (int i = 0; i < n; i++)
            cin >> weight[i];

        array<int, 2> dynamic_programming[1 << n]; // Dynamic programming array to store states

        dynamic_programming[0] = {0, 0}; // Initialization of the first state

        for (int i = 1; i < (1 << n); i++) {
            dynamic_programming[i] = {n + 1, 0}; // Initialization of the current state

            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) {
                    auto current = dynamic_programming[i ^ (1 << j)]; // Previous state without the j-th person

                    // Check if adding the j-th person exceeds the weight limit
                    if (current[1] + weight[j] <= x) {
                        current[1] += weight[j]; // Include the j-th person in the elevator
                    } else {
                        current[0]++; // Move to the next ride due to weight limit
                        current[1] = weight[j]; // Include the j-th person in the new ride
                    }

                    dynamic_programming[i] = min(dynamic_programming[i], current); // Update the current state
                }
            }
        }

        // Output the result: minimum number of elevator rides
        cout << dynamic_programming[(1 << n) - 1][0] + (dynamic_programming[(1 << n) - 1][1] > 0) << endl;
    }

    return 0;
}
