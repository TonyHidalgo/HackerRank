#include <bits/stdc++.h>
using namespace std;

int main(){
    int s,t, a,b, m,n;
    vector<int> man, nar;

    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;

    for (size_t i = 0; i < m; i++){
        int aux;
        cin >> aux;
        man.push_back(aux);
    }

    for (size_t i = 0; i < n; i++){
        int aux;
        cin >> aux;
        nar.push_back(aux);
    }

    int cm = 0, cn = 0;

    for(auto i : man){
        if( s <= a+i  and a+i <= t )
            cm++;
    }

    for(auto i : nar){
        if( s<= b+i and b+i <= t )
            cn++;
    }

    cout << cm << endl;
    cout << cn << endl;
    
  
}