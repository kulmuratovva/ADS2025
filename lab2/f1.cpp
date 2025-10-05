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
    int x, pos;
    cin >> x >> pos;
    node* curr = h;
    for(int i = 0; i < pos; i++){
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << x << " ";
    node* q = curr;
    while(q != NULL){
        cout << q->data << " ";
        q = q->next;
    }

    return 0;

}