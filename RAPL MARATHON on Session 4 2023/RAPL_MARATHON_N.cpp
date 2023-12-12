#include <bits/stdc++.h>
#define pacha_vai() (ios_base::sync_with_stdio(false), cin.tie(NULL));
typedef int kabila;

using namespace std;

kabila main() {
    pacha_vai();
    kabila halim;
    cin >> halim;
    while (halim--) {

        string eva;
        cin >> eva;
        kabila nabila = eva.length();
        vector<kabila> luiccha_labu(256, 0);
        for (kabila shimul = 0; shimul < nabila; shimul++) {
            luiccha_labu[eva[shimul]]++;
        }
        kabila rokeya = min(luiccha_labu['0'], luiccha_labu['1']);
        if (rokeya == 0 || rokeya % 2 == 0) {
            cout << "NET\n";
        } else
            cout << "DA\n";
    }

    return 0;
}
