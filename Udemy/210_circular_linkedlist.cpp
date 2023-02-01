#include<bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node{
    // public: 
    int data;
    struct Node *next;
}*head;
// / class CircularLinkedList{
//     private:
//     Node * head;
//     public:
//     CircularLinkedList(int A[], int n);
//     void display();
//     void recursiveDisplay(Node *p);
//     Node *getHead(){
//         return head;
//     }
//     ~CircularLinkedList();
// };
// CircularLinkedList::CircularLinkedList(int *A, int n){
//     Node *t;
//     Node *tail;

//     head = new Node;

//     head->data = A[0];
//     head->next=head;
//     tail=head;

//     for(int i=0; i<n; i++){
//     t=new Node;
//     t->data = A[i];
//     t->next=tail->next;
//     tail->next=t;
//     // tail->next=t;
//     tail=t;
//     }

// }

void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
//  head=(struct Node*)malloc(sizeof(struct Node));
 head = new Node;
 head->data=A[0];
 head->next=head;
 last=head;

 for(i=1;i<n;i++){
//  t=(struct Node*)malloc(sizeof(struct Node));
// struct Node *t;
 t = new Node;
 t->data=A[i];
 t->next=last->next;
 last->next=t;
 last=t;
 }
}


// <---------------------------Displaying elements-------------------------->



void display(struct Node *p){
    // Node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;

    }while(p!=head);
        cout<<endl;
}


// <---------------------------Recursive Display -------------------------->


void recursiveDisplay(struct Node *p){
    static int flag=0;
    if(p!=head || flag==0){
        flag=1;
        cout<<p->data<<" ";
        recursiveDisplay(p->next);
    }
}
// CircularLinkedList::~CircularLinkedList(){
//     Node *p=head;
//     while(p->next!=head){
//         p=p->next;
//     }
//     while(p!=head){
//         p->next=head->next;
//         delete head;
//         head = p->next;
//     }
//     if(p==head){
//         delete head;
//         head = nullptr;
//     }
// }

// <---------------------------Counting number of Nodes -------------------------->


int length(struct Node *p){
    // struct Node *head;
    int len=0; 
    do{
        len++;
        p=p->next;
    }
    while(p!=head);
    return len;
}


void RDisplay(struct Node *h){
 static int flag=0;
 if(h!=head || flag==0){
 flag=1;
 printf("%d ",h->data);
 RDisplay(h->next);
 }
//  cout<<endl;
 flag=0;
}


//  <-------------- Inserting a node in a liknedlist----------------->


void insert(struct Node *p, int index, int x){
    struct Node *t; 
    // Node *p; 
    // struct Node *head;
    if(index<0 || index>length(head)){
        return;
    }
    if(index==0){
      t=(struct Node *)malloc(sizeof(struct Node));
        t->data=x;
        if(head==NULL){
            head=t;
            head->next=head;
        }
        else{
            // p=head;
            while(p->next!=head){
            p=p->next;
            }
            p->next=t;
            t->next=head;
            head=t;
        }
    }
    else{
        // p=head;
        for(int i=0; i=index-1; i++){
            p=p->next;
        }
            t=(struct Node *)malloc(sizeof(struct Node));
            t->data=x;
            t->next=p->next;
            p->next=t;

    }
}


// void insert(struct Node *p,int index, int x){
//  struct Node *t;
//  int i;
//  if(index<0 || index > length(p))
//  return;

//  if(index==0){
//  t=(struct Node *)malloc(sizeof(struct Node));
//  t->data=x;
//  if(head==NULL){
//  head=t;
//  head->next=head;
//  }
//  else
//  {
//  while(p->next!=head)p=p->next;
//  p->next=t;
//  t->next=head;
//  head=t;
//  }

//  }
//  else{
//  for(i=0;i<index-1;i++)p=p->next;
//  t=(struct Node *)malloc(sizeof(struct Node));
//  t->data=x;
//  t->next=p->next;
//  p->next=t;
//  }
// }


// int delete(struct Node *p, int index){
//     struct Node *q;
//     int x;
//     if(index<0 || index>length(head))
//     return -1;
//     if(index==1){
//         while(p->next=head)
//         p=p->next;
//         if(head==p){
//             free(head);
//             head=NULL;
//         }
//         else{
//             p->next=head->next;
//             free(head);
//             head=p->next;
//         }
//     }
//     else{
//         for(int i=0; i<index-2; i++){
//             p=p->next;
//         }
//         q=p->next;
//         p->next=q->next;
//         x=q->data;
//         free(q);
//     }
//     return x;
// }
int main(){
    int A[]={1,3,5,7,9};
    create(A,5);
    // CircularLinkedList cl(A, sizeof(A)/sizeof(A[0]));
    // cl.display();
    // Node *h=cl.getHead();
    // cl.recursiveDisplay(h);
    // length(head);


    // display(head);
    // cout<<length(head);
    insert(head,4,12);
    display(head);
    RDisplay(head);
    return 0;
}