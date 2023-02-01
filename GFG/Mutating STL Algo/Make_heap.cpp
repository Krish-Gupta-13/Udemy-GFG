//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
vector<int> v={15,6,7,12,30};
cout<<"The elements of the heap are : ";
for(auto i:v){
    cout<<i<<" ";
}
cout<<endl;
make_heap(v.begin(), v.end(), greater<int>());
cout<<v.front()<<endl;
cout<<"The elements of the heap are : ";
for(auto i:v){
    cout<<i<<" ";
}
cout<<endl;
pop_heap(v.begin(), v.end(), greater<int>());
cout<<v.front()<<endl;
cout<<"The elements of the heap are : ";
for(auto i:v){
    cout<<i<<" ";
}
cout<<endl;
v[4]=2;
push_heap(v.begin(), v.end(), greater<int>());
cout<<v.front()<<endl;
cout<<"The elements of the heap are : ";
for(auto i:v){
    cout<<i<<" ";
}
cout<<endl;
return 0;
}