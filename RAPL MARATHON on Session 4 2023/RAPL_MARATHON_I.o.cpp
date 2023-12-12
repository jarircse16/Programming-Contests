#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t098f6bcd4621d373cade4e832627b4f6;
    cin >> t098f6bcd4621d373cade4e832627b4f6;
    while (t098f6bcd4621d373cade4e832627b4f6--)
    {
        string s083b80092cc8a00a5b76a1673a86eeb1;
        cin >> s083b80092cc8a00a5b76a1673a86eeb1;
        int s4f3181c110f899a814eeb2f958235cc8 = 0, s224b961c5b8b3fb79ef619af41eb5462 = 0;
        for (auto &i37969e37b8f87a29b21609a259ff8b61 : s083b80092cc8a00a5b76a1673a86eeb1)
        {
            s4f3181c110f899a814eeb2f958235cc8 += (i37969e37b8f87a29b21609a259ff8b61 == '0');
            s224b961c5b8b3fb79ef619af41eb5462 += (i37969e37b8f87a29b21609a259ff8b61 == '1');
        }
        int a6bb4837eb74329105ee4568dda7dc67e = min(s4f3181c110f899a814eeb2f958235cc8, s224b961c5b8b3fb79ef619af41eb5462);
        int p9c6b128d353ea37a6837c527e8e6aef3 = 0;
        int p7ec24014a39b059c8f983a24c1db3a6e = 0;
        for (auto &i37969e37b8f87a29b21609a259ff8b61 : s083b80092cc8a00a5b76a1673a86eeb1)
        {
            p9c6b128d353ea37a6837c527e8e6aef3 += (i37969e37b8f87a29b21609a259ff8b61 == '0');
            s4f3181c110f899a814eeb2f958235cc8 -= (i37969e37b8f87a29b21609a259ff8b61 == '0');
            p7ec24014a39b059c8f983a24c1db3a6e += (i37969e37b8f87a29b21609a259ff8b61 == '1');
            s224b961c5b8b3fb79ef619af41eb5462 -= (i37969e37b8f87a29b21609a259ff8b61 == '1');
            a6bb4837eb74329105ee4568dda7dc67e = min(a6bb4837eb74329105ee4568dda7dc67e, p7ec24014a39b059c8f983a24c1db3a6e + s4f3181c110f899a814eeb2f958235cc8);
            a6bb4837eb74329105ee4568dda7dc67e = min(a6bb4837eb74329105ee4568dda7dc67e, p9c6b128d353ea37a6837c527e8e6aef3 + s224b961c5b8b3fb79ef619af41eb5462);
        }
        cout << a6bb4837eb74329105ee4568dda7dc67e << endl;
    }
    return 0;
}
