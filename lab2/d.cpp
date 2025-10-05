#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int,int> m;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        m[x]++;
    }
    int mx = INT_MIN;
    for(auto x : m){
        if(x.second > mx) mx = x.second;
    }
    for(auto it = m.rbegin(); it != m.rend(); it++){
        if(it->second == mx) cout << it->first << " ";
    }
    return 0;
}