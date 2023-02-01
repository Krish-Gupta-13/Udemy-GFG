//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
set<int> s;
s.insert(3);
s.insert(5);
s.insert(3);
s.insert(1);
s.insert(8);
s.insert(6);
cout<<"The size of the set is : "<<s.size()<<endl;
cout<<"The elements are : ";
for(auto i:s){
    cout<<i<<" ";
}
cout<<endl;
cout<<"The elements are : ";
for(auto it=s.rbegin(); it!=s.rend(); it++){
    cout<<*it<<" ";
}

cout<<endl;
auto it = s.find(8);
cout<<"Element found : ";
cout<<*it<<endl;
auto itt = s.find(80);
cout<<"Element not found : ";
cout<<*itt<<endl;
cout<<endl;
cout<<"The maximum size of the set is : "<<s.max_size()<<endl;
// s.clear();
if(s.empty()==true){
    cout<<"The set is empty "<<endl;
}
else{
    cout<<"The set is not empty and size of the set is "<<s.size()<<endl;
}

set<int> ss;
ss.insert(34);
ss.insert(234);
ss.insert(344);
s.swap(ss);
cout<<"The elements of set s are : ";
for(auto j:s){
    cout<<j<<" ";
}
cout<<endl;
return 0;
}