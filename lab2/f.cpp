#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int x, pos;
    cin >> x >> pos;
    for(int i = 0; i < pos; i++){
        cout << arr[i] << " ";
    }
    cout << x << " ";
    for(int i = pos; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}