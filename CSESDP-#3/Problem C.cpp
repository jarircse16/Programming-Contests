#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int countWaysToFillGrid(int n, int m) {
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    // Base cases
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i == 1 || j == 1) {
                dp[i][j] = 1;
            } else {
                dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MOD;
            }
        }
    }

    return dp[n][m];
}

int main() {
    int n, m;
    cin >> n >> m;

    int ways = countWaysToFillGrid(n, m);
    cout << ways << endl;

    return 0;
}
