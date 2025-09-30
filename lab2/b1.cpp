#include <bits/stdc++.h>
using namespace std;

struct Node {
    string word;  
    Node* next;  

    Node(string w) {
        word = w;
        next = NULL;
    }
};

Node* cyclicShift(Node* head, int n, int k) {
    if (!head || k % n == 0) return head;
    k %= n;

    Node* cur = head;
    for (int i = 0; i < k - 1; i++) {
        cur = cur->next;
    }

    Node* newHead = cur->next;
    cur->next = NULL; 
    
    Node* tail = newHead;
    while (tail->next) {
        tail = tail->next;
    }

    tail->next = head;

    return newHead;
}

int main() {
    int n, k;
    cin >> n >> k;

    Node* head = NULL; 
    Node* tail = NULL;

    for (int i = 0; i < n; i++) {
        string w;
        cin >> w;

        Node* node = new Node(w);

        if (!head) {
            head = tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }

    head = cyclicShift(head, n, k);

    Node* cur = head;
    while (cur) {
        cout << cur->word << " ";
        cur = cur->next;
    }
    cout << "\n";

    return 0;
}