//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
void BFS(vector<int> adj[], int v, int s){
    bool visited[v];
    for(int i=0; i<v; i++){
        visited[i]=false;
    }
    queue<int> q;
    visited[s]=true;
    q.push(s);
    while(!q.empty()){
        int n = q.size();
        for(int i=0; i<n; i++){
            int u = q.front();
            q.pop();
            cout<<u<<" ";
            for(auto v:adj[u]){
                if(visited[v]==false){
                    visited[v]=true;
                    q.push(v);
                }
            }
        }
    }
}
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main(){
int v = 5;
vector<int> adj[v];
addEdge(adj,0,1);
addEdge(adj,0,2); 
addEdge(adj,1,2); 
addEdge(adj,2,3); 
addEdge(adj,1,3);
addEdge(adj,3,4);
addEdge(adj,2,4);
cout<<"Following is the Breadth First Traversal: "<<endl;
BFS(adj,v,0);
return 0;

}