#include<bits/stdc++.h>
typedef long long int etim_akbor;
typedef bool kutta_mizan;
using namespace std;

int main() {
    etim_akbor i, j, k;
    kutta_mizan banglar_voot = true;
    vector<int> _shahin_notir_pola_k_dhore_fel(256, 0);

    string baba, khaba;
    getline(cin, baba);
    getline(cin, khaba);

    for (i = 0; i < baba.length(); i++) {
        _shahin_notir_pola_k_dhore_fel[baba[i]]++;
    }

    for (i = 0; i < khaba.length(); i++) {
        if (_shahin_notir_pola_k_dhore_fel[khaba[i]] > 0 || khaba[i] == ' ') {
            _shahin_notir_pola_k_dhore_fel[khaba[i]]--;
            continue;
        } else {
            banglar_voot = false;
            break;
        }
    }

    if (banglar_voot == true)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
