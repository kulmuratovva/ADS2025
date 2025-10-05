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

    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        
        if(i%2 == 1){
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
    }

    node* curr = h;
    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }

    return 0;

}