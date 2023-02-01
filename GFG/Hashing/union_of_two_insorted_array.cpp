//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int findunion(int a[], int b[], int m, int n){
    int c[m+n];
    vector<int> v;
    for(int i=0; i<m; i++){
        c[i]=a[i];
    }
    for(int i=0; i<n; i++){
        c[m+i]=b[i];
    }
    int res=0;
    for(int i=0; i<m+n; i++){
        bool flag=false;
        for(int j=0; j<i; j++){
            if(c[i]==c[j]){
                flag=true;
                break;
            }
        }
    if(flag==false){
        v.push_back(c[i]);
        res++;
    }
    }
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    
    return res;
}

int findunion2(int a[], int b[], int m, int n){
    unordered_set<int> s;
    for(int i=0; i<m; i++){
        s.insert(a[i]);
    }
    for(int i=0; i<n; i++){
        s.insert(b[i]);
    }
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    return s.size();
}
int main(){
ios_base::sync_with_stdio(false);
int a[4]={15,20,5,15};
int b[5]={15,15,15,20,10};
// cout<<findunion(a,b,4,5)<<endl;
cout<<findunion2(a,b,4,5)<<endl;




return 0;
}