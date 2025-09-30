#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        queue<char> guests;
        vector<int> freq(26, 0);
        for(int j = 0; j < m; j++){
            char c;
            cin >> c;
            freq[c - 'a']++;
            guests.push(c);
        
            while(!guests.empty() && freq[guests.front() - 'a'] > 1){
                guests.pop();
            }
            if(guests.empty()){
                cout << -1 << " ";
            } else {
                cout << guests.front() << " ";
            }
        }
        cout << endl;

    }


    return 0;
}