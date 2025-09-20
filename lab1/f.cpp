#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> prime_nums;
    int count = 0;
    for(int i = 2; i <= 10000; i++){
        int count = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                count++;
            }
        }
        if(count == 2){
            prime_nums.push_back(i);
        }
    }
    
    int x;
    cin >> x;

    cout << prime_nums[x - 1];
    
    return 0;

}