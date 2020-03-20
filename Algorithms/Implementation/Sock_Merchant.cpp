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

    int c = 0;
    sort(s.begin(), s.end());

    while(s.size())
    {
        int item = s[0];
        c += (int)(count(s.begin(), s.end(), item)/2);
        s.erase(remove(s.begin(), s.end(), item), s.end());
    }

    cout << c;
    



}