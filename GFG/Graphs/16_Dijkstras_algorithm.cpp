//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

vector<int> dijkstra(int graph[4][4], int src, int n){
    vector<int> dist(n,INT_MAX);
    vector<bool> fin(n, false);
    dist[src]=0;
    for(int i=0; i<n-1; i++){
        int u = -1;
        for(int j=0; j<n; j++){
            if(!fin[j] && ((u==-1) || dist[j]<dist[u]))
            u=i;
        }
        fin[u]=true;
        for(int j=0; j<n; j++){
            if(graph[u][j]!=0 && fin[j]==false){
                dist[j]=min(dist[j], dist[u]+graph[u][j]);
            }
        }
    }
    return dist;
}

int main(){
    int n = 4;
	int graph[4][4] = { { 0, 50, 100, 0}, 
						{ 50, 0, 30, 200 }, 
						{ 100, 30, 0, 20 }, 
						{ 0, 200, 20, 0 },}; 

	for(int x: dijkstra(graph,0,n)){
	    cout<<x<<" ";
	} 
return 0;
}