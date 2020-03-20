#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, count = 0;
    cin >> n >> k;
    vector<int> ar;

    for (size_t i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        ar.push_back(aux);
    }

    for (size_t i = 0; i < ar.size() - 1; i++)
    {
        int sum = 0;
        for (size_t j = i + 1; j < ar.size(); j++)
        {
            sum = ar[i] + ar[j];
            if (sum % k == 0)
                count++;
        }
    }

    cout << count;
}