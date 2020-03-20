#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, p, con = 0;
    cin >> n >> p;

    int j = (n+2)/2;
    int k = (p+2)/2 -1;
    int l = j - k -1;

    cout << min(k, l);
}