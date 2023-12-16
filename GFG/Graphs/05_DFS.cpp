//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long int
#define pb push_back
void DFSRec(vector<int> adj[], int s, bool visited[]){
    visited[s]=true;
    cout<<s<<" ";
    queue<int> q;

    // queue<int> q;
    // visited[s]=true;
    // q.push(s);
    // while(!q.empty()){
    //     int u = q.front();
    //     q.pop();
    //     cout<<u<<" ";
    //     for(auto v:adj[u]){
    //         if(visited[v]==false){
    //             visited[v]=true;
    //             q.push(v);
    //         }
    //     }
    // }
    
    for(int u:adj[s]){
        if(visited[u]==false){
            DFSRec(adj,u,visited);
        }
    }
}
void DFS(vector<int> adj[], int v, int s){
    bool visited[v];
    for(int i=0; i<v; i++){
        visited[i]=false;
    }
    // for(int i=0; i<v; i++){
        // if(visited[i]==false){
            DFSRec(adj,s,visited);
        // }
    // }
}
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(v);
}
int main(){
    int v=5;
	vector<int> adj[v];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3); 
	addEdge(adj,1,4);
	addEdge(adj,3,4);
	cout<<"Following is Depth First Traversal: "<<endl; 
	DFS(adj,v,0); 

return 0;
}