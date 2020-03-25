#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    stack<int> scores;
    for (size_t i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (scores.empty() || scores.top() != a)
            scores.push(a);
    }

    int m;
    cin >> m;
    for (size_t i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        while(!scores.empty() and a >= scores.top())
            scores.pop();

        cout << scores.size() +1 << endl;
    }
}