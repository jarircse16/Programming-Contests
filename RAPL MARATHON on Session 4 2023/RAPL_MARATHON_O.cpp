#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    string sadia;
    cin >> n >> sadia;

    vector<int> azrail(10, 0);

    for (long long i = 0; i < n; i++)
    {
        if (sadia[i] == 'L')
        {
            for (int &dipzol : azrail)
            {
                if (dipzol == 0)
                {
                    dipzol = 1;
                    break;
                }
            }
        }
        else if (sadia[i] == 'R')
        {
            for (int j = 9; j >= 0; j--)
            {
                if (azrail[j] == 0)
                {
                    azrail[j] = 1;
                    break;
                }
            }
        }
        else
        {
            azrail[sadia[i] - '0'] = 0;
        }
    }

    for (int dipzol : azrail) cout << dipzol;
    return 0;
}
