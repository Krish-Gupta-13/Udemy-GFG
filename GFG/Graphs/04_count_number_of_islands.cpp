//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long int
#define pb push_back
void BFS(vector<int> adj[], int s, bool visited[]){
    queue<int> q;
    visited[s]=true;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v:adj[u]){
            if(visited[v]==false){
                visited[v]=true;
                q.push(v);
            }
        }
    }
}

void DFS(vector<int> adj[], int s, bool visited[]){
    visited[s]=true;
    for(auto u:adj[s]){
        if(visited[u]==false){
            visited[u]=true;
            DFS(adj, u, visited);
        }
    }
}

int BFSDin(vector<int> adj[], int v){
    bool visited[v];
    int count = 0;
    for(int i=0; i<v; i++){
        visited[i]=false;
    }
    for(int i=0; i<v; i++){
        if(visited[i]==false){
            BFS(adj,i,visited);
            count++;
        }
    }
    return count;
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
int V=7;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3); 
	addEdge(adj,4,5);
	addEdge(adj,5,6);
	addEdge(adj,4,6);

	cout <<"Number of islands: "<< endl; 
	cout<<BFSDin(adj,V)<<endl; 
return 0;
}