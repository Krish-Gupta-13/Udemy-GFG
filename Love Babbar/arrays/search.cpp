#include<iostream>
using namespace std;
bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
        return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={2,3,6,45,34,23,2,12,3,4};
    cout<<"Enter the element to search for "<<endl;
    int key;
    cin>>key;
    bool found = search(arr, 10, key);
    if(found){
        cout<<"The key is present ie "<<key<<endl;
    }
    else{
        cout<<"The key is not present"<<endl;
    }

return 0;
}