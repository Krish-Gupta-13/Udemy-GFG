// find example
#include <iostream>    
#include <algorithm>  
#include <vector>       
using namespace std;
int main (){
  // using find with array and pointer:
//   int myints[] = { 10, 20, 30, 40 };

//   vector<int> myvector (myints,myints+4);
  vector<int> myvector;
  myvector.push_back(10);
  myvector.push_back(20);
  myvector.push_back(30);
  myvector.push_back(40);
int found = find(myvector.begin(), myvector.end(), 20);
for(auto i:myvector){
    if(found)
    cout<<"yes"<<endl;
    else 
    cout<<"no"<<endl;
}

  return 0;
}