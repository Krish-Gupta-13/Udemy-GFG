#include<iostream>
using namespace std;
void findarray(int arr1[], int n, int arr2, int m){
int i = n-1;
int j = n-1;
int ans;
int carry=0;
while(i>=0 && j>=0){
    int val1 = a[i];
    int val2 = b[j];
    int sum = val1 + val2 + carry;
    carry = sum/10;
    sum = sum%10;
    j--;
    i--; 
  }
while(i>=0){
    int sum = a[i] + carry;
    carry = sum/10;
    sum = sum%10;
    i--;
  }
while(j>=0){
    int sum = b[i] + carry;
    carry = sum/10;
    sum = sum%10;
    j--;
  }
}
int main(){
int a[2]={3,4};
int b[3]={3,4,5};

return 0;
}