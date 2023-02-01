// //Code bhi krle kitna game khelega//
// #include<bits/stdc++.h>
// #include<iomanip>
// using namespace std;
// int joshephus(int n,int k){
//     if(n==1){
//         return 0;
//     }
//     return (joshephus(n-1,k)+k)%n;
// }
// int main(){
// cout<<joshephus(5,2)<<endl;
// return 0;
// }

//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int joshephus(int n,int k){
    if(n==1){
        return 1;
    }
    return (joshephus(n-1,k)+k-1)%n+1;
}
int main(){
cout<<joshephus(5,2)<<endl;
return 0;
}