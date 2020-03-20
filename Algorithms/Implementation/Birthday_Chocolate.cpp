#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> s;

    for (size_t i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        s.push_back(aux);
    }

    int d, m, count =0;
    cin >> d >> m;

    if(m > s.size()){
        cout << "0";
        return 0;
    }

    int i=0, mm = m;


    while(i + mm - 1 < s.size()){
        int sum = 0, k=i;
        for (size_t j = 0; j < m; j++)
        {
            sum += s[k];
            k++;
        }
        if(sum == d)
            count++;
        i++;
    }
    
    cout << count;
    
}