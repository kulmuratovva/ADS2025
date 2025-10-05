#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;

};

int main(){
    int n;
    cin >> n;
    node* h = NULL;
    node* t = NULL;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        node* n = new node;
        n->data = x;
        n->next = NULL;
        if(h == NULL){
            h = n;
            t = n;
        } else{
            t->next = n;
            t = t->next;
        }
    }
    int k, cnt = 0, minn = INT_MAX, pos;
    cin >> k;
    node* curr = h;
    while(curr != NULL){
        if(abs(curr->data - k) < minn){
            minn = abs(curr->data - k);
            pos = cnt;
        }
        curr = curr->next;
        cnt++;
    }
    cout << pos << "\n";
    return 0;
}