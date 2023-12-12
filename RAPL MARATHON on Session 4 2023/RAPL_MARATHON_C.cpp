#include<bits/stdc++.h>
using namespace std;

struct Kabila {
    long long int a, b, i, j, k;
};

int main() {
    Kabila eva;
    cin >> eva.a >> eva.b;
    vector<long long int> x(eva.a), y(eva.b);

    for (eva.i = 0; eva.i < eva.a; eva.i++)
        cin >> x[eva.i];

    for (eva.i = 0; eva.i < eva.b; eva.i++)
        cin >> y[eva.i];

    sort(x.begin(), x.end());

    for (eva.i = 0; eva.i < eva.b; eva.i++) {
        cout << upper_bound(x.begin(), x.end(), y[eva.i]) - x.begin() << " ";
    }

    return 0;
}
