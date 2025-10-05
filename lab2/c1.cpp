#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x) : data(x), next(NULL){}
};

int main(){
    int n;
    cin >> n;

    Node *head = NULL, *tail = NULL;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        Node* node = new Node(x);
        if(head == NULL) head = tail = node;
        else{
            if(i % 2 == 1){
                tail->next = node;
                tail = node;
            }
        }
    }

    Node* h = head;
    while(h != NULL){
        cout << h->data << " ";
        h = h->next;
    }

    return 0;

}