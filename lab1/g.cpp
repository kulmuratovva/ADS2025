#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(){

    int x;
    cin >> x;

    int num = 2;
    vector<int> prime_nums;
    vector<int> super_primes;

    while(prime_nums.size() < 1000){
        if(isPrime(num)) prime_nums.push_back(num);
        num++;
    }

    for(int i = 0; i < prime_nums.size(); i++){
        if(isPrime(i+1)) super_primes.push_back(prime_nums[i]);
    }

    cout << super_primes[x-1] << endl;
    
    return 0;

}