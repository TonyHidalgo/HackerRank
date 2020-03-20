#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr[n];

    for (size_t i = 0; i < n; i++){
        for (size_t j = 0; j < n; j++){
            int aux;
            cin >> aux;
            arr[i].push_back(aux);
        }   
    }

    int princ=0, secun=0;

//Diagonal Principal
    for (size_t i = 0; i < n; i++)
    {
        princ += arr[i][i];
    }
    
    //Diagonal Secundaria
    for (size_t i = 0; i < n; i++)
    {
        secun += arr[i][n-i-1];
    }
    
    
    
    int sum =  princ - secun;
    cout << abs(sum);

}