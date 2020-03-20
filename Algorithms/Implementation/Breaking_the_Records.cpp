#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> scores;

    for (size_t i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        scores.push_back(aux);
    }

    int min = scores[0];
    int max = scores[0];
    int count_min = 0, count_max = 0;

    for(auto i : scores){
        if(i < min){
            min = i;
            count_min++;
        } else if(i > max){
            max = i;
            count_max++;
        }
    }

    cout << count_max << " " << count_min;




    
}