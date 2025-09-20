#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> v(n);
    stack<int> st;

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for(int x : v){
        
        while(!st.empty() && st.top() > x) st.pop();
        
        if(st.empty()) cout << "-1" << " "; 
        else cout << st.top() << " ";

        st.push(x);

    }

    return 0;

}
/*
5
2 1 5 8 3

x: 3
st: 1 
out: -1 -1 1 5 1

*/