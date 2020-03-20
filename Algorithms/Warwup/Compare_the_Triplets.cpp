#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> a, b;
    int x,y,z, pa = 0, pb = 0;

    cin >> x >> y >> z;
    a.push_back(x);
    a.push_back(y);
    a.push_back(z);

    cin >> x >> y >> z;
    b.push_back(x);
    b.push_back(y);
    b.push_back(z);

    for(int i=0; i< 3; i++){
        if(a[i] > b[i]){
            pa++;
        } else if(a[i]< b[i]){
            pb++;
        }
    }

    cout << pa << " " << pb;


}