#include<iostream>
#include<vector>
#include<array>
using namespace std;
int main(){
    int n = 6;
    int arr2
    vector<int> ans;
    for(int i=0;i<n;i++){
        int element = arr1[i];
        for(int j=0;j<n;j++){
            if(element < arr2[j])
            break;
            if(element == arr2[j]){
                ans.push_back(element);
                arr2[j] = -2;
                break;
            }
        }
    }
    return ans;


return 0;
}