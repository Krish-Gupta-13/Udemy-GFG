#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }

    }
};
void insertnode(Node* &tail, int element, int d){
    if(tail == NULL){
        Node* newnode = new Node(d);
        tail = newnode;
        newnode -> next = newnode;
    }
    else{
        Node* curr = tail;
        while(curr -> data != element){
            curr = curr -> next;
        }
        Node* temp = new node(d);
        temp -> next = curr -> next;
        
    }
}
int main(){

return 0;
}