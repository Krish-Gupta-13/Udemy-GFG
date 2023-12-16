#include <bits/stdc++.h> 
using namespace std; 
	class Line{
	public:
	void setLength(double len);
	double getLength(void);
	Line(); 
private:
	double length;
 };
	Line::Line(void){
	cout << "Object is being created" << endl;
            }
 void Line::setLength( double len ) {
	length = len;
       }
 	double Line::getLength( void ){	
     return length;
  }
	int main() {
        cout<<endl;
	Line l;
	l.setLength(32);
	cout << "Length of line: " <<l.getLength() <<endl; 
    cout<<endl;
	return 0;
 }
