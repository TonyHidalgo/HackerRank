//SIN FUNCIONAR 19/03/2020

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a;
    for (size_t i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        a.push_back(j);
    }

    sort(a.begin(), a.end());

    vector<int> f(n, 1);
    for(size_t i = 0; i < n; i++){
        for(size_t j = i+1; j < n; j++){
            if(abs(a[i] - a[j]) <= 1)
                f[i]++;
            else
                break;
        }
    }

    for (auto i : f)
        cout << i << ",";
    cout << endl;

    cout << *max_element(f.begin(), f.end()) << endl;
}