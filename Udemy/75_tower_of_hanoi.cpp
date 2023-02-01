//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
// from a to c .... b is auxulliary
void TOH(int n, int a, int b, int c){
    if(n>0){
        TOH(n-1,a,c,b);
        cout<<"("<<a<<","<<c<<")"<<endl;
        TOH(n-1,b,a,c);
    }
} 
int main(){
    TOH(2,1,3,2);

return 0;
}
// 1 2
// 1 3
// 2 3

// //Code bhi krle kitna game khelega//
// #include<bits/stdc++.h>
// #include<iomanip>
// using namespace std;
// // from a to c .... b is auxulliary
// void TOH(int n, int a, int b, int c){
//     if(n>0){
//         TOH(n-1,a,c,b);
//         cout<<"("<<a<<","<<c<<")"<<endl;
//         TOH(n-1,b,a,c);
//     }
// } 
// int main(){
//     TOH(2,1,2,3);

// return 0;
// }