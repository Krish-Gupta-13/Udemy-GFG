#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(4);
    s.insert(2);
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
     set<int>::iterator it = s.begin();
    //   set<int>::iterator it = 2;
     it++;
     it++;
    s.erase(it);
    for(auto i: s ){
        cout<<i<<" ";
    }cout<<endl;
return 0;
}