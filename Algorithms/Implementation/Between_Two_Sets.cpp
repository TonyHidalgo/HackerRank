#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> a, b;

    for (size_t i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        a.push_back(aux);
    }

    for (size_t i = 0; i < m; i++)
    {
        int aux;
        cin >> aux;
        b.push_back(aux);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    unsigned int count = 0;
    unsigned short times_multiplied = 2;
    unsigned short num = a.back();

    while ( num <= b.front())
    {
    	bool is_multiple = true;
        bool is_factor = true;
        
        for (unsigned int i = 0; i < a.size(); ++i)
        {
            if (num % a[i] != 0)
            {
                is_multiple = false;
                break;
            }
        }

        for (unsigned int j = 0; j < b.size(); ++j)
        {
            if (is_multiple && b[j] % num != 0)
            {
                is_factor = false;
                break;
            }
        }

        if (is_multiple && is_factor)
        {
            count++;
        }
        num = a.back() * times_multiplied;
        times_multiplied++;
    }
    cout << count;
    
}