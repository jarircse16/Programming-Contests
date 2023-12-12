#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), t(n), clash_squad(n + 1, 0);

    long long blade_template = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> t[i];
        if (t[i]) {
            blade_template += a[i];
            a[i] = 0;
        }
    }

    clash_squad[0] = 0;

    for (int i = 1; i <= n; ++i) {
        clash_squad[i] = a[i - 1] + clash_squad[i - 1];
    }

    long long php_artisan_serve = 0;

    for (int i = n; i >= m; --i) {
        php_artisan_serve = max(php_artisan_serve, 1ll * clash_squad[i] - clash_squad[i - m]);
    }

    cout << blade_template + php_artisan_serve << endl;

    return 0;
}

