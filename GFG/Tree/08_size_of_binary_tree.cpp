//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
struct Node{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int k){
        key=k;
        left=right=NULL;
    }
};
int getsize(Node *root){
    if(root==NULL){
        return 0;
    }
    else{
        return 1+getsize(root->left)+getsize(root->right);
    }
}

int main(){
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->right=new Node(60);
    cout<<getsize(root)<<endl;

return 0;
}