//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int countdistinct(int a[], int n){
    unordered_set<int> s(a,a+n);
    cout<<"The number of distinct elements in an array is "; 
    return s.size();
}
int main(){
ios_base::sync_with_stdio(false);
int a[5]={10,20,10,3,10};
cout<<countdistinct(a,5)<<endl;
return 0;
}