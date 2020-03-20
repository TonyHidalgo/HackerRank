//SIN FUNCIONAR 19/03/2020

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a;
    for (size_t i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        a.push_back(j);
    }

    vector<int> f;
    f.push_back(a[0]);

    for (size_t i = 1; i < a.size(); i++)
    {
        if(abs(f.back() - a[i]) <= 1)
            f.push_back(a[i]);
        else{
            if(f.back() > a[i]){
                f.pop_back();
                f.push_back(a[i]);
            }
                
        }
    }

    for(auto i : f)
        cout << i << ",";
        cout << endl;

    cout << f.size() << endl;


    


    
}