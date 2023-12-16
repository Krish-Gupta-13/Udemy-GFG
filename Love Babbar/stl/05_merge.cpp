// merge algorithm example
#include <iostream>     
#include <algorithm>    
#include <vector>     
using namespace std;


int main () {
int first[] = {5,10,115,20,25};
int second[] = {50,40,30,20,10};
vector<int> v(10);

sort (first,first+5);
sort (second,second+5);
merge (first,first+5,second,second+5,v.begin());
     cout << "The resulting vector contains: ";
for(auto i:v){
    cout<<i<<" ";
}
cout<<endl;

  return 0;
}