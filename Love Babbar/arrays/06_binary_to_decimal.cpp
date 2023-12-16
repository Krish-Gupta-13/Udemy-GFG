// #include<iostream>
// #include<cmath>
// using namespace std;
// #define ll long long int
// int main(){
// ll n;
// cin>>n;
// ll i=0;
// ll ans=0 ;
// while(n!=0){
//     ll digit = n % 10;
//      if(digit == 1){
//          ans = ans + pow(2,i);
//      }
//      n = n/10;
//      i++;
// } 
// cout<<ans<<endl;
// return 0;
// }


// *C++ Solution*
// 10000000000000000000000000000000


#include <iostream>
#include <math.h>
using namespace std;
long long reversedBits(long long X)
{
    long long int res = 0;
    int power = 31;
    while (X != 0)
    {
        int s = X % 2;
        res = res + (s * pow(2, power));
        power--;
        X = X / 2;
    }
    return res;
}
int main()
{
    long long int X;
    cin >> X;
    cout << reversedBits(X) << endl;
    return 0;
}
