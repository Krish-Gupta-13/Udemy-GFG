// If the difference in height of left nodes and right nodes is not greater than 1 than the binary tree is said to be balanced.
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

// Naive Solution O(n^2)

int height(Node *root){
    if(root==NULL)
    return 0;
    else{
        return(1+max(height(root->left), height(root->right)));
    }
}
bool isBalanced(Node *root){
    if(root==NULL)
    return true;
    int lh=height(root->left);
    int rh=height(root->right);
    return(abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right));
}

// Efficient Solution O(n)

int isbalanced(Node *root){
    if(root==NULL)
    return 0;
    int lh=isbalanced(root->left);
    if(lh==-1)
    return -1;
    int rh=isbalanced(root->right);
    if(rh==-1)
    return -1;
    if(abs(lh-rh)>1)
        return -1;
    else
        return max(lh,rh)+1;
}
int main(){
Node *root=new Node(10);
root->left=new Node(5);
root->right=new Node(30);
root->right->left=new Node(15);
root->right->right=new Node(20);

// cout<<isBalanced(root)<<endl;
if(isbalanced(root))
    cout<<"Balanced"<<endl;
else{
    cout<<"Not Balanced"<<endl;
}
return 0;
}