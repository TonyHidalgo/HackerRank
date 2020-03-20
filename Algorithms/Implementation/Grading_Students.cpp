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

    for(auto i : ar){
        if(i<38)
            cout << i << endl;
        else{
            long long j = i;
            while(j%5 != 0){
                j++;
            }
            if(j-i < 3)
                cout << j << endl;
            else
                cout << i << endl;
            
        }

    }

}