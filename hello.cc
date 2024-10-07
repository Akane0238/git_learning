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
    return 0;
}	
