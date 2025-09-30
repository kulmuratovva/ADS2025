#include <bits/stdc++.h>
using namespace std;
struct Node{
    string val;
    Node* prev, *next;
    Node(string v): val(v), prev(nullptr), next(nullptr) {}
};
class linkedlist{
private:
    Node* head, *tail;
public:
    linkedlist() {
        head = nullptr;
        tail = nullptr;
    }

    void add_front(string x){
        Node* node = new Node(x);
        if(!head){
            head = tail = node;
        } else {
            node->next = head;
            head->prev = node;
            head = node;
        }
        cout << "ok" << endl;
    }

    void add_back(string x){
        Node* node = new Node(x);
        if(!tail){
            head = tail = node;
        } else {
            node->prev = tail;
            tail->next = node;
            tail = node;
        }
        cout << "ok" << endl;
    }

    void erase_front(){
        if(!head){
            cout << "error" << endl;
            return;
        }
        cout << head->val << endl;
        Node* temp = head;
        head = head->next;
        if(head){
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }
        delete temp;
    }
    void erase_back(){
        if(!tail){
            cout << "error" << endl;
            return;
        }
        cout << tail->val << endl;
        Node* temp = tail;
        tail = tail->prev;
        if(tail){
            tail->next = nullptr;
        } else {
            head = nullptr;
        }
        delete temp;
    }
    void front(){
        if(!head){
            cout << "error" << endl;
        } else {
            cout << head->val << endl;
        }
    }
    void back(){
        if(!tail){
            cout << "error" << endl;
        } else {
            cout << tail->val << endl;
        }
    }
    void clear(){
        while(head){
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        tail = nullptr;
        cout << "ok" << endl;
    }
};
int main(){
    linkedlist l;
    string command;
    while(cin >> command){
        if(command == "add_front"){
            string x;
            cin >> x;
            l.add_front(x);
        } else if( command == "add_back"){
            string x;
            cin >> x;
            l.add_back(x);
        } else if(command == "erase_front"){
            l.erase_front();
        } else if(command == "erase_back"){
            l.erase_back();
        } else if(command == "front"){
            l.front();
        } else if(command == "back"){
            l.back();
        } else if(command == "clear"){
            l.clear();
        } else if (command == "exit") {
            cout << "goodbye" << endl;
            break;
        }
    }

    return 0;}