#include <stdio.h> 
#include <bits/stdc++.h> 
#include <stdlib.h> 
using namespace std; 
struct Node{ 
 int data; 
 struct Node *next; 
}*first=NULL; 
void create(int A[],int n){ 
 int i; 
 struct Node *t,*last; 
 first=(struct Node *)malloc(sizeof(struct Node)); 
 first->data=A[0]; 
 first->next=NULL; 
 last=first; 
 for(i=1;i<n;i++){ 
 t=(struct Node*)malloc(sizeof(struct Node)); 
 t->data=A[i]; 
 t->next=NULL; 
 last->next=t; 
 last=t; 
 } 
} 

// <---------------------------Displaying elements-------------------------->
void Display(struct Node *p){ 
 while(p!=NULL){ 
 printf("%d ",p->data); 
 p=p->next; 
 } 
} 



// <---------------------------Recursive Display -------------------------->


void RDisplay(struct Node *p){ 
 if(p!=NULL){ 
 RDisplay(p->next); 
 printf("%d ",p->data); 
 } 
} 

// <---------------------------Maximum element-------------------------->
int max(struct Node *p){ 
    int max = INT_MIN; 
    while(p){ 
    if(p->data>max) 
        max = p->data; 
        p = p->next; 
} 
   return (max); 
} 



// <---------------------------Counting number of Nodes -------------------------->
int countt(struct Node *p){
    int count = 0;
    while(p!=NULL){
        count++;
        p = p->next;
    }
    return count;
// cout<<countt<<endl;
}


// <---------------------------Recursive maximum -------------------------->
int Rmax(struct Node *p){ 
    int x = 0; 
    if(p==0) 
    return INT_MIN; 
    x = Rmax(p->next); 
    if(x>p->data){ 
        return x; 
    } 
    else{ 
        return p->data; 
    } 
} 


// <---------------------------Searching in a LinkedList-------------------------->



int search(struct Node *p, int key){ 
    if(p==NULL) 
    // return NULL; 
    if(key==p->data); 
        // return (p); 
    return search(p->next, key); 
} 
// struct Node * Lsearch(struct Node *p, int key){ 
//     while(p!=NULL){ 
//         if(key==p->data) 
//             return p; 
//         p=p->next; 
//     } 
//         return NULL; 
// } 
 

// <---------------------------Linear Search-------------------------->



struct Node * Lsearch(struct Node *p, int key){ 
    struct Node *q = NULL; 
    while(p!=NULL){ 
        q = p; 
        if(key==p->data){  
        q->next = p->next; 
        p->next = first; 
        first = p; 
            return p; 
        } 
        p=p->next; 
    } 
        return NULL; 
} 
 

//  <-------------- Inserting a node in a liknedlist----------------->

void insert(struct Node *p, int index, int x){
    Node *t;
    if(index<0 || index>countt(p)){
        return;
    }

    if(index==0){
        t = new Node;
        t->data = x;
        t->next = first;
        first = t;
    }
    else if(index>0){
        p = first;
        for(int i=0; i<index-1 && p; i++){
            p = p->next;
        }
        if(p){
            t = new Node;
            t->data = x;
            t->next=p->next;
            p->next = t; 
        }
    }
}

// <---------------------------Inserting the element at last-------------------------->

void insertlast(int x){ 
    Node *t = new Node; 
    t->data = x; 
    t->next = NULL; 
    if(first==NULL){ 
        first = t; 
        // last = t; 
    } 
    else{ 
        // last->next = t; 
        // last = t; 
    } 
} 
 

 // <---------------------------Insert in a Sorted LilnkedList------------------------->


void Sortedinsert(struct Node *p, int x){ 
    // struct Node *t, *q=NULL; 
    Node *q=NULL;
    Node *t = new Node; 
    t->data = x; 
    t->next=NULL; 
    if(first==NULL) 
    first=t; 
    else{ 
    while(p && p->data<x){ 
        q=p; 
        p=p->next;       
      } 
      if(p==first){ 
        t->next=first; 
        first=t; 
      } 
      else{ 
        t->next=q->next; 
        q->next=t; 
      } 
    } 
}


// <---------------------------Deleting a Node-------------------------->


int Delete(struct Node *p, int index){
    struct Node *q;
    int x = -1;
    if(index<1 || index>countt(p))
    return -1;
    if(index==1){
        q=first;
        x=first->data;
        first=first->next;
        delete q;
        return x;
    }
    else{
        for(int i=0; i<index-1; i++){
            q=p;
            p=p->next;

        }
        q->next=p->next;
        x=p->data;
        delete p;
        return x;

    }
}

// <------------------------IsSorted----------------------------->

bool sorted(struct Node *p){
    int x = INT_MIN;
    // Node *p = first;
    while(p!=NULL){
        if(p->data<x){
            return false;
        }
        x = p->data;
        p=p->next;
    }
    return true;
}

// <---------------------------Removing Duplicates-------------------------->

void Duplicates(struct Node *p){
    // Node *p = first;
    Node *q = first->next;
    while(q!=NULL){
        if(p->data!=q->data){
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }
}


// <---------------------------Reversing LinkedList -------------------------->


void Reverse(struct Node *p){
    int *A,i=0;
    struct Node *q=p;
    A=(int *)malloc(sizeof(int)*countt(p));
    while(q!=NULL){
        // A[i]=q->next;
        A[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q!=NULL){
        q->data=A[i];
        q=q->next;
        i--;

    }
}


// <---------------------------Reversing Linked using 3 pointers -------------------------->


void SimpleReverse(struct Node *p){
    struct Node *q=NULL, *r=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

// <---------------------------Recursive Reversing of Linkedlist -------------------------->


void RecursiveReverse(struct Node *q, struct Node *p){
    if(p){
        RecursiveReverse(p,p->next);
        p->next=q;
    }
    else{
        first=q;
    }
}


// <--------------------------Checking Loop------------------------------->


int IsLoop(struct Node *f){
    struct Node *p, *q;
    p=f;
    q=f;
    do{
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    }while(p && q && p!=q);
        if(p==q)
          return 1;   
        
        else
          return 0;
        

    
}
int main(){ 
 struct Node *temp; 
//  int A[]={3,5,7,10,25,32}; 
int A[]={10,20,30,40,50,60};
 create(A,6); 
 struct Node *t1, *t2;
 t1=first->next->next;
 t2=first->next->next->next->next;
 t2->next=t1;

// temp = Lsearch(first,25); 
//  if(temp){ 
//     cout<<"key found "<<temp->data<<endl; 
//  } 
//  else{ 
//     cout<<"key not found "<<endl; 
//  } 

//  cout<<countt(first)<<endl;

// countt(first);

//  Display(first); 

//  cout<<Rmax(first)<<endl; 

//  cout<<search(first, 10); 

// insert(first, 80, 100);

// Sortedinsert(first,0);

// cout<<sorted(first)<<endl;

// if(sorted(first)){
//     cout<<"Linkedlist is sorted"<<endl;
// }
// else{
//     cout<<"LinkedList is not Sorted"<<endl;
// }

// Delete(first,3);

// Duplicates(first);

// Reverse(first);

// SimpleReverse(first);

// RecursiveReverse(NULL,first);

cout<<IsLoop(first)<<endl;

Display(first);

 return 0; 
}