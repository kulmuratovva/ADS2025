#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    string s;
    cin >> s;
    queue<int> S;
    queue<int> K;
    for(int i = 0; i < n; i++){
        if(s[i] == 'S') S.push(i);
        else K.push(i);
    }
    while(!S.empty() && !K.empty()){
        int ids = S.front();
        int idk = K.front();
        S.pop();
        K.pop();

        if(ids < idk) S.push(ids+n);
        else K.push(idk+n);
    }
    if(!S.empty()) cout << "SAKAYANAGI";
    else cout << "KATSURAGI";

    return 0;

}
/*

4
KSKS
0123

S:  
K:   4 6

ids:  3
idk:  2

*/