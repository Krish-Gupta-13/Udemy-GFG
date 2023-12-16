#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){
        int value = this -> data;
        // memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
    };
    void insertathead(Node* &head, int d){
      
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp;
    } 

    void insertattail(Node* &tail, int d){
        Node* temp = new Node(d);
        tail -> next = temp;
        tail = temp;
    }


    void insertatpositon(Node* &tail, Node* &head, int posotion, int d){
          if(posotion==1){
            insertathead(head,d);
            return;
        }
        Node* temp = head;
        int count = 1;
        while(count<posotion-1){
            temp = temp->next;
            count++;
        }
        if(temp -> next == NULL){
            insertattail(tail,d);
            return;
        }
        Node* nodetoinsert = new Node(d);
        nodetoinsert -> next = temp -> next;
        temp -> next = nodetoinsert;
    }

    void print(Node* &head){
        if(head == NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        Node* temp = head;
        while(temp!=NULL){
            cout<< temp -> data<<" ";
            temp = temp -> next;
        }
        cout<<endl;
    }
        void deletenode(int posotion, Node* &head){
            if(posotion == 1){
                Node* temp = head;
                head = head -> next;
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
                prev -> next = curr -> next;
                curr -> next = NULL;
                delete curr;
            }
        }
    

int main(){
Node* node1 = new Node(10);
Node* head = node1;
Node* tail = node1;
insertathead(head,12);
print(head);
insertathead(head,15);
print(head);
insertatpositon(tail,head,3,22);
print(head);
insertattail(tail,11);
print(head);
deletenode(1,head);
print(head);
// cout<<"head"<<head -> data<<endl;
return 0;
}