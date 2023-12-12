#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, q, k;
    int _tor_ma_morche[100000];

    scanf("%d %d", &n, &q);

    for (int i = 0; i < n; i++) {
        scanf("%d", &_tor_ma_morche[i]);
    }

    sort(_tor_ma_morche, _tor_ma_morche + n);

    for (int z = 0; z < q; z++) {
        scanf("%d", &k);

        // Use std::binary_search to check if the element exists
        if (binary_search(_tor_ma_morche, _tor_ma_morche + n, k)) {
            // Find the bal_chiro_tomar of the element using lower_bound
            int bal_chiro_tomar = lower_bound(_tor_ma_morche, _tor_ma_morche + n, k) - _tor_ma_morche;
            printf("%d\n", bal_chiro_tomar);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}
