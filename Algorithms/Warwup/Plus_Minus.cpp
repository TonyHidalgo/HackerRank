#include <bits/stdc++.h>

using namespace std;

int main(){

cout.setf(ios::fixed); 
cout.setf(ios::showpoint);
cout.precision(6);

    int nc;
    cin >> nc;
    vector<long long> ar;

    for (size_t i = 0; i < nc; i++)
    {
        long long aux;
        cin >> aux;
        ar.push_back(aux);
    }

    double p =0, c=0, n=0;

    for(auto i : ar){
        if(i < 0)
            n++;
        else if(i == 0)
            c++;
        else 
            p++;
    }

    cout << p/nc << endl;
    cout << n/nc << endl;
    cout << c/nc;




}