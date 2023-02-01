#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
struct node{
    char data;
    struct node *next;
}*top=NULL;

void push(char x){
    struct node *t;
    t = new node;
    if(t==NULL){
        cout<<"stack overflow"<<endl;
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}
char pop(){
    struct node *t;
    char x=-1;
    if(top==NULL){
        printf("stack underflow \n");
    }
    else{
        t=top;
        top=top->next;
        x=t->data;
        delete t;
    }
    return x;
}

void display(){
    struct node *p;
    p=top;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int isBalanced(string exp){
    for(int i=0; exp[i]!='\0'; i++){
        if(exp[i]=='('){
            push(exp[i]);
        }
        else if(exp[i]==')'){
            if(top==NULL){
                return 0;
            }
            else{
                pop();
            }
        }
    }
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){

    string exp = "((a+b)*(c+d)))";
    printf("%d ", isBalanced(exp));
    
    return 0;
}
