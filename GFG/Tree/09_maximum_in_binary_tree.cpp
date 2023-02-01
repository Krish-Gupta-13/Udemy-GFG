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
int getMaximum(Node *root){
    int maxi = INT_MIN;
    if(root==NULL){
        return maxi;
    }
    else{
        return max({root->key,getMaximum(root->left),getMaximum(root->right)});
        // return 1+getMaximum(root->left)+getMaximum(root->right);
    }
}

int main(){
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->right=new Node(60);
    cout<<getMaximum(root)<<endl;

return 0;
}