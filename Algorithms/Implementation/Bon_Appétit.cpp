#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, b;
    cin >> n >> k;
    vector<int> bill;

    for (size_t i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        bill.push_back(aux);
    }

    cin >> b;
    
   int total = (accumulate(bill.begin(), bill.end(), 0) - bill[k])/2;

   if(total == b){
       cout << "Bon Appetit";
   }else{
       cout << b - total;
   }
}