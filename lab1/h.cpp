#include <iostream>
using namespace std;

int main(){

    int x;
    cin >> x;
    
    int count = 0;
    for(int i = 1; i <= x; i++){
        if (x % i == 0){
            count += 1;
        }
    }

    if(count == 2){
        cout << "YES";
    } else{
        cout << "NO";
    }

    return 0;

}