// set_union example
#include <iostream>    
#include <algorithm>   
#include <vector>      
using namespace std;
int main () {
  int first[] = {5,10,15,20,25};
  int second[] = {50,40,30,20,10};
  vector<int> v(first, first+5, second, second+5);   

   sort(v.begin(),v.end());
  for(auto i:v){
    cout<<i<<" ";
}
    cout<<endl;                 
//   vector<int>::iterator it;

//   sort (first,first+5);     //  5 10 15 20 25
//   sort (second,second+5);   // 10 20 30 40 50


// //   set_union (first, first+5, second, second+5, v.begin());
// set_union(v.begin(), v.end());
  
//   v.resize(it-v.begin());                   

//     cout << "The union has " << (v.size()) << " elements:\n";
// for(auto i:v){
//     cout<<i<<" ";
// }
//     cout<<endl;

  return 0;
}
