#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#include<queue>
// #include "Queue.h"
using namespace std;

struct Node{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

struct Queue{
    int size;
    int front;
    int rear;
    struct Node **Q;
};

void Create(struct Queue *q, int size){
    q->size=size;
    q->front=q->rear=0;
    q->Q=(struct Node **)malloc(q->size*sizeof(struct Node *));
}

void Enqueue(struct Queue *q, struct Node *x){
    if((q->rear+1)%q->size==q->front)
    printf("Queue is full");
    else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}

struct Node *dequeue(struct Queue *q){
    struct Node *x=NULL;
    if(q->front==q->rear){
        cout<<"Queue is empty"<<endl;
    }
    else{
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}

int isEmpty(struct Queue q){
    return q.front==q.rear;
}

struct Node *root=NULL;

void treecreate(){
    struct Node *p, *t;
    int x;
    struct Queue q;
    Create(&q,100);

    cout<<"Enter root value ";
    cin>>x;
    root=(struct Node *)malloc(sizeof(struct Node));
    root->data=x;
    root->lchild=root->rchild=NULL;
    Enqueue(&q,root);

    while(!isEmpty(q)){
        p=dequeue(&q);
        cout<<"Enter the left chlid of "<<p->data<<endl;
        cin>>x;
        if(x!=-1){
            t=(struct Node *)malloc(sizeof(struct Node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            Enqueue(&q,t);
        }
        cout<<"Enter right child of "<<p->data<<endl;
        cin>>x;
        if(x!=-1){
            t=(struct Node *)malloc(sizeof(struct Node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            Enqueue(&q,t);
        }
    }
}

void preorder(struct Node *p){
    if(p){
        cout<<p->data<<" ";
        preorder(p->lchild);
        // cout<<" ";
        preorder(p->rchild);
    }
}
void inorder(struct Node *p){
    if(p){
        inorder(p->lchild);
        cout<<p->data<<" ";
        preorder(p->rchild);
    }
}

void postorder(struct Node *p){
    if(p){
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<p->data<<" ";
    }
}

int main(){
    treecreate();
    preorder(root);
    cout<<endl;
    cout<<"Post order "<<endl;
    postorder(root);
}