#include<bits/stdc++.h> 
using namespace std; 
struct Node{ 
    struct Node *prev; 
    int data; 
    struct Node *next; 
}*first=NULL; 
 
void create(int A[], int n){ 
    struct Node *t, *last; 
    int i; 
 
    first=new Node; 
    first->data=A[0]; 
    first->prev=first->next=NULL; 
    last=first; 
 
    for(i=1; i<n; i++){ 
        t=new Node; 
        t->data=A[i]; 
        t->next=last->next; 
        t->prev=last; 
        last->next=t; 
        last=t; 
    } 
} 
void display(struct Node *p){ 
    while(p){ 
        cout<<p->data<<" "; 
        p=p->next; 
    } 
    cout<<endl; 
} 
int lenght(struct Node *p){ 
    int len=0; 
    while(p){ 
        len++; 
        p=p->next; 
    } 
    return len; 
} 
void insert(struct Node *p, int index, int x){ 
    struct Node *t; 
    int i; 
    if(index<0 || index>lenght(first)) 
    return; 
    if(index==0){ 
        t=new Node; 
        t->data=x; 
        t->prev=NULL; 
        t->next=first; 
        first->prev=t; 
        first=t; 
    } 
    else{ 
        for(int i=1; i<index; i++){ 
            p=p->next; 
        } 
        t=new Node; 
        t->data=x; 
        t->prev=p; 
        t->next=p->next; 
        if(p->next!=NULL) 
        p->next->prev=t; 
        p->next=t; 
    } 
} 
int Delete(struct Node *p, int index){ 
    int x = -1; 
    int i; 
    if(index<1 || index>lenght(first)) 
    return -1; 
    if(index==1){ 
        first=first->next; 
        if(first) 
        first->prev=NULL; 
 
        x=p->data; 
        delete p; 
    } 
    else{ 
        for(int i=0; i<index-1; i++){ 
            p=p->next; 
        } 
        p->prev->next=p->next; 
        if(p->next!=NULL) 
        p->next->prev=p->prev; 
        x=p->data; 
        delete p; 
    } 
} 
void reverse(struct Node *p){ 
    struct Node *temp; 
    while(p!=NULL){ 
        temp=p->next; 
        p->next=p->prev; 
        p->prev=temp; 
        p=p->prev; 
        if(p!=NULL && p->next==NULL){ 
            first=p; 
        } 
 
    } 
} 
int main(){ 
    int A[]={1,3,5,7,9}; 
    create(A,5); 
    lenght(first); 
    // insert(first,6,15); 
    // Delete(first,1); 
    reverse(first); 
    display(first); 
    return 0; 
}