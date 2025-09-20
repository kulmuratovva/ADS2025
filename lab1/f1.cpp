#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    if(x < 2) return false;
    for(int i = 2; i*i <= x; i++){
        if(x % i == 0) return false;
    }
    return true;
}

int main(){

    int n;
    cin >> n;
    vector<int> primes;
    for(int i = 2; i < 10000; i++){
        if(isPrime(i)) primes.push_back(i);
    }

    cout << primes[n-1];

    return 0;

}