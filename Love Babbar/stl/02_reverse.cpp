// reverse algorithm example
#include <iostream>     
#include <algorithm>   
#include <vector>       
using namespace std;
int main () {
vector<int> myvector;

  // set some values:
  for (int i=1; i<10; ++i)
   myvector.push_back(i);   // 1 2 3 4 5 6 7 8 9
reverse(myvector.begin(),myvector.end());    // 9 8 7 6 5 4 3 2 1

  // print out content:
//     cout << "myvector contains:";
//   for (vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
//     cout << ' ' << *it;
//     cout << '\n';
 for(auto i : myvector){
    cout<<i<<" ";
  }
  cout<<endl;

  return 0;
}
