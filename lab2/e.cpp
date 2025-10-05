#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> v;
    string str = "", s;
    for(int i = 0; i < n; i++){
        cin >> s;
        if(s != str) v.push_back(s);
        str = s;
    }
    cout << "All in all: " << v.size() << "\n";
    cout << "Students:\n";
    for(int i = v.size()-1; i >=0; i--){
        cout << v[i] << "\n";
    }
    return 0;
}