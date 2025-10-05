#include <iostream>
using namespace std;

struct node{
    string data;
    node* next;
};

int main(){
    int num, k;
    cin >> num >> k;
    node* h = NULL;
    node* t = NULL;
    for(int i = 0; i < num; i++){
        string s;
        cin >> s;
        node* n = new node;
        n->next = NULL;
        n->data = s;
        if(h == NULL){
            h = n;
            t = n;
        } else{
            t->next = n;
            t = t->next;
        }
    }
    if(k == 0){
        node* curr = h;
        while(curr != NULL){
            cout << curr->data << " ";
            curr = curr->next;
        }
        return 0;
    }
    node* curr = h;
    int cnt = 0;
    while(curr != NULL){
        if(cnt >= k){
            cout << curr->data << " ";
        }
        curr = curr->next;
        cnt++;
    }
    curr = h;
    cnt = 0;
    while(curr != NULL){
        if(cnt < k){
            cout << curr->data << " ";
        }
        curr = curr->next;
        cnt++;
    }
    return 0;
}