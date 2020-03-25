#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin >> n;
    queue<int> c;
    for (size_t i = 0; i < n; i++)
    {
        cin >> a;
        c.push(a);
    }

    while (!c.empty())
    {
        int height = 0;
        int b = c.front();
        for (size_t i = 0; i <= b; i++)
        {
            if (i % 2 != 0)
                height = height * 2;
            else
                height++;
        }
        cout << height << endl;
        c.pop();
    }
}