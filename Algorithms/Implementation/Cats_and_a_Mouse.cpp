#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    vector<vector<int>> v;

    for (size_t i = 0; i < q; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        vector<int> a;
        a.push_back(x);
        a.push_back(y);
        a.push_back(z);
        v.push_back(a);
    }

    for (auto i : v)
    {
        int cata = abs(i[2] - i[0]), catb = abs(i[2] - i[1]);
        if (cata == catb)
        {
            cout << "Mouse C" << endl;
        }
        else if (cata < catb)
        {
            cout << "Cat A" << endl;
        }
        else if (catb < cata)
        {
            cout << "Cat B" << endl;
        }
        else
        {
            cout << "Algo Mal" << endl;
        }
    }
}