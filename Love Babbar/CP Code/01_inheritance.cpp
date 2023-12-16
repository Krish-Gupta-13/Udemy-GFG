#include<iostream>
using namespace std;
class polygon{
     protected:
    float length, breadth;
     public:
void set_data(float a, float b){
   length = a;
   breadth = b;	
    }
    void get_data(float a, float b){
        
    }
 };
class Rectangle_peri: public polygon{
public:
void perimeter(void){
 cout<<(2*(length + breadth))<<endl;
    } 
 };
 class Rectangle_area: public polygon{
public:
void area(void){
 cout<<(length * breadth)<<endl;
   } 
  };
int main(){
Rectangle_peri peri;
Rectangle_area area;
peri.set_data (5,3);
area.set_data (2,5);
// cout <<"perimeter of Rectangle : " <<Rectangle_peri() << endl;
// cout <<"perimeter of Triangle : "<< Rectangle_area() << endl;
Rectangle_area();
Rectangle_peri();
return 0;
 }
