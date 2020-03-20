#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> ar;

    for (size_t i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        ar.push_back(aux);
    }

    sort(ar.begin(), ar.end());

    vector<int> counter;

    for (size_t i = 1; i <= 5; i++)
    {
       counter.push_back(count(ar.begin(), ar.end(), i));
    }

    cout << max_element(counter.begin(), counter.end())-counter.begin()+1;

    
    

}