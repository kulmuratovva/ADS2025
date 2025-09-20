#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    if(x < 2) return false;
    else{
        for(int i = 2; i*i <= x; i++){
            if(x % i == 0) return false;
        }
    }
    return true;
}

int main(){

    int n;
    cin >> n;
    vector<int> primes;
    vector<int> suprimes;
    for(int i = 2; i < 10000; i++){
        if(isPrime(i)) primes.push_back(i);
    }
    for(int i = 0; i < primes.size(); i++){
        if(isPrime(i+1)) suprimes.push_back(primes[i]);
    }
    cout << suprimes[n-1];

    return 0;

}