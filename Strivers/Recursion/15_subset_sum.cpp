#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
void fun(int ind, int sum, int arr[],int n, vector<int> &sumsub){
    if(ind == n){
    sumsub.push_back(sum);
    sort(sumsub.begin(), sumsub.end());
    for(auto i: sumsub){
        cout<<i<<" ";
    }
    cout<<endl;
    return;
    }

    fun(ind + 1, sum + arr[ind], arr, n, sumsub);
    fun(ind+1, sum, arr, n, sumsub);

}
int main(){
int n = 3;
int arr[3] = {3,1,2};
int ind;
int sum = 0;
vector<int> sumsub;
fun(0, 0, arr, n, sumsub);
return 0;
}