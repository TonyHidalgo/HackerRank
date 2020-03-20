#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<long long> ar;

    for (size_t i = 0; i < 5; i++)
    {
        long long aux;
        cin >> aux;
        ar.push_back(aux);
    }

    sort(ar.begin(), ar.end(), greater<long long>());

    long long max = ar[0]+ar[1]+ar[2]+ar[3];
    long long min = ar[1]+ar[2]+ar[3]+ar[4];

    cout << min << " " << max;


}