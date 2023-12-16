#include<iostream>
using namespace std;
void reverse(int arr[], int n){
   int s = 0;
   int e = n-1;
   for(int i=0; i<n; i++){
      swap(arr[s++],arr[e--]);
         }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int reve;
    reve = reverse(arr, 5);
    cout<<"The reversed string is : "<<reve<<endl;


return 0;
}