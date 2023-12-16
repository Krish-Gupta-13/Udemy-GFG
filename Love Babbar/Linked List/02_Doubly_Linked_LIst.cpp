#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        this -> data = d;
        this -> prev = NULL; 
        this -> next = NULL;
    }
};
// traversing in a linked list
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
// gives length of linked list
int getlength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}
void insertathead(Node* &head, int d){
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
    }
    else{
        
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    }
}
void insertattail(Node* &tail, int d){
    if(tail==NULL){
        Node* temp= new Node(d);
        tail = temp;
    }
    else{
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail; 
    tail = temp;
}
    }
void insertatpositon(Node* &tail, Node* &head, int posotion, int d){
    if(posotion==1){
        insertathead(head, d);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count<posotion-1){
        temp = temp -> next;
        count++;
    }
    if(temp -> next = NULL){
        insertattail(tail, d);
        return;
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert -> next = temp -> next;
    temp -> next -> prev = nodetoinsert;
    temp -> next = nodetoinsert;
    nodetoinsert -> prev = temp;
}
void deletenode(int posotion, Node* &head){
    if(posotion==1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;
        while(count < posotion){
            prev = curr;
            curr = curr -> next;
            count++;
        }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    cout<<getlength(head)<<endl;
    insertathead(head, 11);
    print(head);
    insertathead(head, 123);
    print(head);
    insertattail(tail, 45);
    insertatpositon(tail, head, 3,95);
    print(head);
    deletenode(1,head);
    print(head);


return 0;
}