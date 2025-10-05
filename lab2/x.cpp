#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;

};

int main(){

    node* n;
    node* t;
    node* h;

    n = new node;
    n->data = 1;
    t = n;
    h = n;
    
    n = new node;
    n->data = 2;
    t->next = n;
    t = t->next;

    n = new node;
    n->data = 3;
    t->next = n;
    t = t->next;

    n = new node;
    n->data = 4;
    t->next = n;
    n->next = NULL;

    node* curr = h;
    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }

    return 0;

}