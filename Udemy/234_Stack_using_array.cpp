#include <bits/stdc++.h> 
#include<stdio.h> 
using namespace std; 
struct Stack{ 
    int size; 
    int top; 
    int *S; 
}; 
  
void create(struct Stack *st){ 
    st->size=5; 
    st->top=-1; 
    st->S=(int *)malloc(st->size*sizeof(int)); 
} 
 
void display(struct Stack st){ 
    // int i; 
    for(int i=st.top; i>=0; i--){ 
        cout<<st.S[i]<<" "; 
    } 
    cout<<endl; 
} 
 
void push(struct Stack *st, int x){ 
    if(st->top==st->size-1){ 
        printf("Stack overflow \n"); 
    } 
    else{ 
        st->top++; 
        st->S[st->top]=x; 
    } 
} 
 
int pop(struct Stack *st){ 
    int x=-1; 
    if(st->top==-1){ 
        printf("Stack underflow \n"); 
    } 
    else{ 
        x=st->S[st->top]; 
        st->top--; 
    } 
    return x; 
} 
 
int peek(struct Stack *st, int index){ 
    int x=-1; 
    if(st->top-index+1<0){ 
        cout<<"Invalid Index \n"; 
    } 
    else{ 
        x=st->S[st->top-index+1]; 
    } 
    return x; 
} 
 
int isEmpty(struct Stack *st){ 
    if(st->top==-1){ 
        return 1; 
    } 
    else{ 
        return 0; 
    } 
} 
 
int isFull(struct Stack *st){ 
    if(st->top==st->size-1){ 
        return 1; 
    } 
    return 0; 
} 
int main(){ 
 
    struct Stack st; 
    create(&st); 
 
    push(&st, 10); 
    push(&st, 20); 
    push(&st, 30); 
    // push(&st, 40); 
    push(&st, 50); 
    // push(&st, 60); 
 
    // pop(&st); 
 
    cout<<peek(&st, 1)<<endl; 
 
    cout<<"Whether the stack is full or not : "<<isFull(&st)<<endl; 
    cout<<"Whether the stack is empty or not : "<<isEmpty(&st)<<endl; 
 
 
 
    display(st); 
    return 0; 
}