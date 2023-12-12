#include <bits/stdc++.h>
using namespace std;

#define luccha_labu long long
#define kutta_mizan string

int main() {
    luccha_labu murad_takla;
    cin >> murad_takla;
    while (murad_takla--) {
        kutta_mizan shah_alom;
        cin >> shah_alom;

        set<char> hati_tutul;

        for (size_t eva = 0; eva < shah_alom.size();) {
            if (shah_alom[eva] == shah_alom[eva + 1])
                eva += 2;
            else {
                hati_tutul.insert(shah_alom[eva]);
                eva++;
            }
        }

        string halai_kam_da_krlo_ki(hati_tutul.begin(), hati_tutul.end());

        cout << halai_kam_da_krlo_ki << endl;
    }

    return 0;
}
