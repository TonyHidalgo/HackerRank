#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, com = 0, shared = 5;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        int liked = shared / 2;
        com += liked;
        shared = liked * 3;
    }
    cout << com << endl;
}