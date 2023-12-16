#include<iostream>
using namespace std;
int firstocc(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    int mid = (s + e)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid - 1;
        }
         else if(key>arr[mid]){
             s = mid + 1;
         }
         else if(key<arr[mid]){
             e = mid - 1;
         }
         mid = (s + e)/2;
    }
    return ans;
} 
int lastocc(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = (s + e)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid + 1;
        }
        else if(key>arr[mid]){
            s = mid + 1;
        }
        else if(key<arr[mid]){
            e = mid - 1;
        }
        mid = (s + e)/2;
    }
    return ans;
}
int main(){
    int even[15]={3,3,3,3,3,3,3,4,4,4,5,5,5,7,7};
    
    cout<<"First occurence of 3 is at index "<<firstocc(even,15,3)<<endl;
    cout<<"Last occurence of 3 is at index "<<lastocc(even,15,3)<<endl; 
return 0;
}