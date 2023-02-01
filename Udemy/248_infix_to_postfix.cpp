#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node{
    char data;
    struct node *next;
}*top=NULL;

void push(char x){
    struct node *t;
    t=new node;
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
    char x = -1;
    if(top==NULL){
        cout<<"stack underflow"<<endl;
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

int pre(char x){
    if(x=='+' || x=='-'){
        return 1;
    }
    else{
        return 2;
    }
    return 0;
}

int isOperand(char x){
    if(x=='+' || x=='-' || x=='*' || x=='/'){
        return 0;
    }
    else{
        return 1;
    }
}

char *InToPost(string infix){
    int i=0; 
    int j=0;
    char *postfix;
    int len = infix.length();
    postfix=(char *)malloc((len+2)*sizeof(char));

    while(infix[i]!='\0'){
        if(isOperand(infix[i])){
            postfix[j]=infix[i];
            i++;
            j++;
        }
        else{
            if(pre(infix[i])>pre(top->data)){
                push(infix[i]);
                i++;
            }
            else{
                postfix[j]==pop();
                j++;
            }
        }
    }
    while(top!=NULL){
        postfix[j]=pop();
        j++;
    }
    postfix[j]='\0';
    return postfix;
}
int main(){
    string infix = "a+b+c-d/e";
    push('#');
    char *postfix = InToPost(infix);

    printf("%s ",postfix);


    return 0;
}