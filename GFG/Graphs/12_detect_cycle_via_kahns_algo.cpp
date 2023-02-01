//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

void topologicalSort(vector<int> adj[], int v){
    vector<int> indegree(v,0);
    for(int u=0; u<v; u++){
        for(int x:adj[u])
        indegree[x]++;
    }
    queue<int> q;
    for(int i=0; i<v; i++){
        if(indegree[i]==0)
        q.push(i);
    }
    int count = 0;
    while(q.empty()==false){
        int u = q.front();
        q.pop();
        for(int x:adj[u])
        if(--indegree[x]==0)
        q.push(x);
        count++;
    }
    if(count!=v){
        cout<<"There exists a cycle in the graph "<<endl;
    }
    else{
        cout<<"There exists no cycle in the graph "<<endl;
    }
}
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}
int main(){
    int V=5;
	vector<int> adj[V];
	addEdge(adj,0, 1); 
    addEdge(adj,4, 1); 
    addEdge(adj,1, 2); 
    addEdge(adj,2, 3); 
    addEdge(adj,3, 1);  
  
    topologicalSort(adj,V);

return 0;
}