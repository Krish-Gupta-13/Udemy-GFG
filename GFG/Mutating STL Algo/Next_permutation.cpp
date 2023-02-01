//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
vector<int> v = {1,2,3};
next_permutation(v.begin(), v.end());
next_permutation(v.begin(), v.end());
next_permutation(v.begin(), v.end());
next_permutation(v.begin(), v.end());
next_permutation(v.begin(), v.end());
next_permutation(v.begin(), v.end());
for(auto i:v){
    cout<<i<<" ";
}
cout<<endl;
return 0;
}