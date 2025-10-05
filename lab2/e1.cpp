#include <bits/stdc++.h>
using namespace std;

struct node {
    string val;
    node* next;
    node* prev;
    node() {
        val = "";
        next = nullptr;
        prev = nullptr;
    }
};

int main() {
    int n, cnt = 1;
    string s;

    cin >> n;

    node* head = nullptr;
    node* tail = nullptr;

    for (int i = 1; i <= n; i++) {
        cin >> s;
        node* n = new node;
        n->val = s;

        if (head == nullptr) {
            head = n;
            tail = n;
        } else {
            if (s != tail->val) cnt++;
            tail->next = n;
            n->prev = tail;
            tail = n;
        }
    }

    cout << "All in all: " << cnt << endl;
    cout << "Students:\n";

    node* cur = tail;
    while (cur != nullptr) {
        cout << cur->val << '\n';
        while (cur->prev != nullptr && cur->val == cur->prev->val) {
            cur = cur->prev;
        }
        cur = cur->prev;
    }

    return 0;
} 