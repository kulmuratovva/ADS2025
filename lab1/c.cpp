#include <iostream>
#include <string>
#include <deque>
using namespace std;


int main(){

    string s1,s2;
    cin >> s1 >> s2;
    deque<char> a;
    deque<char> b;

    for(char x : s1){
        a.push_back(x);
        if(x == '#'){
            a.pop_back();
            a.pop_back();
        }
    }
    for(char x : s2){
        b.push_back(x);
        if(x == '#'){
            b.pop_back();
            b.pop_back();
        }
    }

    if(a == b) cout << "Yes" ;
    else cout << "No";
    
    return 0;

}