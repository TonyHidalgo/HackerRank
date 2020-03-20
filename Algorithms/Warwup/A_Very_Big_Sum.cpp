#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> ar;

    for (size_t i = 0; i < n; i++)
    {
        long long aux;
        cin >> aux;
        ar.push_back(aux);
    }

    long long sum =0;

    for(auto i : ar){
        sum += i;
    }

    cout << sum;
    


}