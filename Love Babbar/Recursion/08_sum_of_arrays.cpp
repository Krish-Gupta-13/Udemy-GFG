// Summation of arrays using recursion -->
#include<iostream>
using namespace std;
int summ(int arr[], int size){
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
}
    int remaingPart = summ(arr+1, size-1);
    int sum = arr[0] + remaingPart;
    return sum;
}
int main(){
int arr[4]={1,2,3,4};
int size = 4;
int b = summ(arr, size);
cout<<"Sum is : "<<b<<endl;
return 0;
}
// #include<iostream>
// using namespace std;
// int main(){
//     int a=0;
// int arr[7]={1,2,3,4,5,6,7};
// // for(int i=0; i<5; i++){
// //     cin>>arr[i];
// // }

// for(int i=0; i<7; i++){
//     a = arr[i]+arr[i+1];
//     a = a + arr[i]+arr[i+1];
// }
// cout<<a<<endl;


// return 0;
// }