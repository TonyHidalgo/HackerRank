#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> con;
    con.push_back(0);

    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] == 'D')
        {
            con.push_back(con[i] - 1);
        }
        if (s[i] == 'U')
        {
            con.push_back(con[i] + 1);
        }
    }

    int val = 0;

    for (size_t i = 0; i < con.size(); i++)
    {
        if (con[i] == 0 and (i != 0 or i != con.size() - 1))
        {
            if (con[i + 1] < 0)
            {
                val++;
            }
        }
    }

    cout << val;
}