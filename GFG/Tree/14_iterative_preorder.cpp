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
void iterativepreorder(Node *root){
    if(root==NULL)
    return;
    stack<Node *> st;
    st.push(root);
    while(st.empty()==false){
        Node *curr = st.top();
        cout<<(curr->key)<<" ";
        st.pop();
        if(curr->right!=NULL)
        st.push(curr->right);
        if(curr->left!=NULL)
        st.push(curr->left);
    }
}
int main(){
Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
    iterativepreorder(root);
return 0;
}