//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
//Jda mt soch code krte ja//
int main(){
    vector<int> v1={10,20,40};
    vector<int> v2={5,15,30};
    vector<int> v3(v1.size()+v2.size());
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    for(auto i:v3){
        cout<<i<<" ";
    }
    cout<<endl;

return 0;
}