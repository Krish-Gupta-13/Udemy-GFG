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
void postorder(Node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";
    }
}
int main(){
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
	root->right->right=new Node(50);
    postorder(root);

return 0;
}