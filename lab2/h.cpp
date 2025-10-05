#include <bits/stdc++.h>
using namespace std;
 
struct Node{
    int val;
    Node* next;
    Node(): val(0), next(nullptr) {}
    Node(int x): val(x), next(nullptr) {}
    Node(Node* next): val(0), next(next) {}
    Node(int x, Node* next): val(x), next(next) {}
};
 
Node* insert(Node* head, Node* node, int p){
    if(p == 0){
        node->next = head;
        return node;
    }
    Node* temp = head;
    for(int i = 0; i < p - 1 && temp; i++){
        temp = temp->next;
    }
    if(temp){
        node->next = temp->next;
        temp->next = node;
    }
    return head;
}
 
Node* remove(Node* head, int p){
    if(!head){
        return nullptr;
    }
    if(p == 0){
        Node* temp = head->next;
        delete head;
        return temp;
    }
    Node* temp = head;
    for(int i = 0; i < p - 1 && temp; i++){
        temp = temp->next;
    }
    if(temp && temp->next){
        Node* deleting = temp->next;
        temp->next = deleting->next;
        delete deleting;
    }
    return head;
}
 
Node* replace(Node* head, int p1, int p2){
    if(p1 == p2){
        return head;
    }
    Node* prev = nullptr, *cur = head;
    for(int i = 0; i < p1 && cur; i++){
        prev = cur;
        cur = cur->next;
    }
    if(!cur){
        return head;
    }

    if(prev){
        prev->next = cur->next;
    } else {
        head = cur->next;
    }

    Node* temp = head;
    if(p2 == 0){
        cur->next = head;
        return cur;
    }
    for(int i = 0; i < p2 - 1 && temp; i++){
        temp = temp->next;
    }
    if(temp){
        cur->next = temp->next;
        temp->next = cur;
    }
    return head;
}
 
Node* reverse(Node* head){
    Node* prev = nullptr, *cur = head, *next = nullptr;
    while(cur){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}
 
void print(Node* head){
    if(!head){
        cout << -1 << endl;
        return;
    }
    Node* temp = head;
    while(temp){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
 
Node* cyclic_left(Node* head, int x){
    if(!head || !head->next){
        return head;
    }
    int n = 0;
    Node* temp = head;
    while(temp){
        n++;
        temp = temp->next;
    }
    x %= n;
    if(x == 0){
        return head;
    }
    Node* newtail = head;
    for(int i = 0; i < x - 1; i++){
        newtail = newtail->next;
    }
    Node* newhead = newtail->next;
    newtail->next = nullptr;
    temp = newhead;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = head;
    return newhead;


}
 
Node* cyclic_right(Node* head, int x){
    if(!head || !head->next){
        return head;
    }
    int n = 0;
    Node* temp = head;
    while(temp){
        n++;
        temp = temp->next;
    }
    x %= n;
    if(x == 0){
        return head;
    }
    int steps = n - x;
    Node* newtail = head;
    for(int i = 0; i < steps - 1; i++){
        newtail = newtail->next;
    }
    Node* newhead = newtail->next;
    newtail->next = nullptr;
    temp = newhead;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = head;
    return newhead;
}
 
int main(){
    Node* head = nullptr;
    while (true)
    {
        int command; cin >> command;
        if (command == 0){
            break;
        }else if(command == 1){
            int x, p; cin >> x >> p;
            head = insert(head, new Node(x), p);
        }else if (command == 2){
            int p; cin >> p;
            head = remove(head, p);
        }else if (command == 3){
            print(head);
        }else if (command == 4){
            int p1, p2; cin >> p1 >> p2;
            head = replace(head, p1, p2);
        }else if (command == 5){
            head = reverse(head);
        }else if (command == 6){
            int x; cin >> x;
            head = cyclic_left(head, x);
        }else if (command == 7){
            int x; cin >> x;
            head = cyclic_right(head, x);
        }   
    }
    return 0;
}