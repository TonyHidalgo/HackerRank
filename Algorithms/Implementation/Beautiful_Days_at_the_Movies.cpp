#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, cont = 0;
    cin >> i >> j >> k;

    for (int n = i; n <= j; n++)
    {
        string s = to_string(n);
        reverse(s.begin(), s.end());
        int inv = stoi(s);
        int rest = abs(n - inv);

        if (rest % k == 0)
            cont++;
    }
    cout << cont << endl;
}