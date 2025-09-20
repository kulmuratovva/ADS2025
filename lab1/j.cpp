#include <iostream>
#include <deque>
using namespace std;

int main(){

    char c;
    cin >> c;

    deque<int> d;

    while(c != '!'){

        if(c == '+'){
            int x;
            cin >> x;
            d.push_front(x);
        } else if(c == '-'){
            int x;
            cin >> x;
            d.push_back(x);
        } else if(c == '*'){
            if(d.empty()){
                cout << "error" << "\n";
            } else if(d.size() >= 2){
                cout << d.front() + d.back() << "\n";
                d.pop_front();
                d.pop_back();
            } else if(d.size() == 1){
                cout << d.front() + d.back() << "\n";
                d.pop_front();
            }
            
        }
        
        cin >> c;   
                  
    } 

    return 0;

}