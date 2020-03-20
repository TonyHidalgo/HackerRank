#include <bits/stdc++.h>
using namespace std;


int item;

bool compare(int x, int b){ return x >= item;}

int main()
{
    int b, n, m;
    cin >> b >> n >> m;

    item = b;

    vector<int> key, dri;

    for (size_t i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        key.push_back(aux);
    }
    for (size_t i = 0; i < m; i++)
    {
        int aux;
        cin >> aux;
        dri.push_back(aux);
    }

    vector<int> gasto;

    for (size_t i = 0; i < key.size(); i++)
    {
        for (size_t j = 0; j < dri.size(); j++)
        {
            gasto.push_back(key[i] + dri[j]);
        }
    }
    sort(gasto.begin(), gasto.end(), greater<int>());
    int max = *max_element(gasto.begin(), gasto.end(), compare);
    if(max <= b)
        cout << max;
    else
        cout << "-1";

}