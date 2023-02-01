//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int findintersection(int a[], int b[], int m, int n){
    int res=0;
    vector<int> v;
    for(int i=0; i<m; i++){
        bool flag = false;
        for(int j=0; j<i-1; j++){
            if(a[j]==a[i]){
                flag=true;
                break;
            }

        }
            if(flag==true){
                continue;
            }
        for(int j=0; j<n; j++){
            if(a[i]==b[j]){
                v.push_back(a[i]);
                res++;
                break;
            }
        }
    }
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    return res;
}

int findintersection2(int a[], int b[], int m, int n){
    unordered_set<int> s;
    vector<int> v;
    for(int i=0; i<m; i++){
        s.insert(a[i]);
    }
    int res=0;
    for(int j=0; j<n; j++){
        if(s.find(b[j])!=s.end()){
            res++;
            v.push_back(b[j]);
            s.erase(b[j]);
        }
    }
     for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    return res;
}

int main(){
ios_base::sync_with_stdio(false);
int a[4]={15,20,5,15};
int b[5]={15,15,15,20,10};
// cout<<findintersection(a,b,4,5)<<endl;
cout<<findintersection2(a,b,4,5)<<endl;
return 0;
}