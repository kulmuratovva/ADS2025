#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        deque<int> dq;
        for(int i = n; i >= 1; i--){
            dq.push_front(i);
            for(int x = i; x > 0; x--){
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }

        for(int d : dq){
            cout << d << " ";
        }

        cout << endl;
    }
    
    return 0;
}
/*
[3 4]
[4 3]
[2 4 3]
[3 2 4]
[4 3 2]
[1 4 3 2]
[2 1 4 3]
*/