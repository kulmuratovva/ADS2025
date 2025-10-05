#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, x;
    cin >> k;
    vector<int> v(k);
    for(int i = 0; i < k; i++){
        cin >> v[i];
    }
    cin >> x;
    map<int,int> m;
    for(int i = 0; i < k; i++){
        int diff = abs(v[i] - x);
        m.insert({diff, v[i]});
    }
    for(int i = 0; i < k; i++){
        if(m.begin()->second == v[i]){
            cout << i;
            return 0;    
        } 
    }
    return 0;

}