#include<iostream>
#include<vector>
#include<deque>
using namespace std;

int main(){
    vector<int>v;
    deque<int>d;
    cout<<"capacity  "<<v.capacity()<<endl;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);

    // cout<<"front  "<<v.front()<<endl;
    // cout<<"back  "<<v.back()<<endl;
    // cout<<"pop front "<<v.front()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    d.pop_back();
    cout<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    // //     d.pop_back();
    // cout<<endl;
    // for(int i:d){
    //     cout<<i<<" ";
    //     cout<<" ";
    // }
return 0;
}