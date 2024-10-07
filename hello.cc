#include <iostream>
using namespace std;
struct node{
    node* next;
    int val;
};

int main(){
    cout << "Hello world!" << endl;
    cout << "I gona build a linked list" << endl;
    
    node* head = new node;
    head->val = 238;
    head->next = nullptr;

    node* follow = new node;
    follow->val = 123;
    follow->next = nullptr;
    // link the two nodes
    head->next = follow;

    return 0;
}	
