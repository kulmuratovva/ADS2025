#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

int main(){
    int n;
    cin >> n;
    map<int,int> mp;
    int maxx = INT_MIN;
    node* h = NULL;
    node* t = NULL;
    for(int  i = 0; i < n; i++){
        int x;
        cin >> x;
        mp[x]++;
        if(mp[x] > maxx) maxx = mp[x];
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
    set<int> st;
    node* curr = h;
    while(curr != NULL){
        if(mp[curr->data] == maxx) st.insert(curr->data);
        curr = curr->next;
    }
    for(auto it = st.rbegin(); it != st.rend(); it++){
        cout << *it << " ";
    }
    return 0;
}