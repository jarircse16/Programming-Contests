#include <bits/stdc++.h>

using namespace std;

const int Limit = 26;
int cunt[Limit];

void suBzero(){
    memset(cunt, 0, sizeof(cunt));
}

int main()
{
	int tang;
	cin >> tang;
	while (tang--)
	{
		string sadia;
		cin >> sadia;
		suBzero();
		for (auto c : sadia) cunt[c - 'a']++;
		int _1cent = 0;
		int _1dollar = 0;
		for (int i = 0; i < Limit; i++)
			if (cunt[i] == 1)
				_1cent++;
			else if (cunt[i] > 0)
				_1dollar++;
		cout << (_1dollar + _1cent / 2) << endl;
	}
	return 0;
}
