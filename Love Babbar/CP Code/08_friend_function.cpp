#include <iostream>
using namespace std;
class keyboard{
double length;
public:
friend void printlength( keyboard keyboard );
void setlength( double len ){
    length = len;
    }
};
void printlength( keyboard keyboard ){
cout << "length of keyboard : " << keyboard.length <<endl;
}
int main(){
    cout<<endl;
  keyboard keyboard;
  keyboard.setlength(10);
  printlength(keyboard);
  cout<<endl;
return 0;
}