#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> height;
    for (size_t i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        height.push_back(a);
    }

    int max = *max_element(height.begin(), height.end());
    cout << max << endl;
    if(max > k)
        cout << max - k;
    else
        cout << "0";
}