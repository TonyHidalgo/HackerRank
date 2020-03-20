#include <bits/stdc++.h>
using namespace std;

int main(){
    int w,x,y,z;
    cin >> w >> x >> y >> z;

    if((w < y and x <= z) or (y < w and z <= x) or (w == y and (x < z or z < x )))
        cout << "NO";
    else{
        for (size_t i = 0; i < 10000; i++)
        {
            w += x;
            y += z;
            if(y == w){
                cout << "YES";
                return 0;
            }
        }
        
        cout << "NO";
    }

}