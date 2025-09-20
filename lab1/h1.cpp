#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    if(x < 2) return false;
    else{
        for(int i = 2; i*i < x; i++){
            if(x%i == 0) return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    if(isPrime(n)) cout << "YES";
    else cout << "NO";

    return 0;

}

/*
2 3 5 7 11 13
1 2 3 4  5  6
0 1 2 3  4  5

sup: 3 5 11 

*/