#include <iostream>    
#include <algorithm> 
#include <vector>     
using namespace std;
int main () {
  int myints[] = {9,8,7,6,5,4,3,2,1};
vector<int> myvector (myints, myints+9);
partial_sort (myvector.begin(), myvector.begin()+3, myvector.end());
    cout << "myvector contains:";
  // for (vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
  //   cout << ' ' << *it;
  //   cout<<endl;
  for(auto i : myvector){
    cout<<i<<" ";
  }
  cout<<endl;
  return 0;
}

