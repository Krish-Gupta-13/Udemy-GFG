#include <iostream>
using namespace std;
int main(){
try{
int apki_umar;
cout<<"Enter the age : "<<endl;
cin>>apki_umar;
if (apki_umar >= 18) {
cout << "Your age is above 18 "<<endl;
} 
else {
throw(apki_umar);
   }
}
catch(int mera_age) {
cout << "Your age is less than 18"<<endl;
cout << "apki_umar is: " << mera_age<<endl;
}
return 0;
}