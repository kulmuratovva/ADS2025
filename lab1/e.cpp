#include <iostream>
#include <deque>
#include <cmath>
using namespace std;

int main(){

    deque<int> Boris(5);
    deque<int> Nursik(5);
    for(int i = 0; i < 5; i++){
        cin >> Boris[i];
    }
    for(int i = 0; i < 5; i++){
        cin >> Nursik[i];
    }
    int cnt = 0;
    while(!Boris.empty() && !Nursik.empty() && cnt <= 1000000){
        int b = Boris.front();
        int n = Nursik.front();
        Boris.pop_front();
        Nursik.pop_front();

        if((b == 0 && n == 9) || ((b > n) && !(b == 9 && n == 0))){
            Boris.push_back(b);
            Boris.push_back(n);
        } else{
            Nursik.push_back(b);
            Nursik.push_back(n);
        }
        cnt++;
    }
    if(cnt > 1000000) cout << "blin nichya";
    else if(!Boris.empty()) cout << "Boris" << " " << cnt;
    else cout << "Nursik" << " " << cnt;

    return 0;

}