#include <iostream>
using namespace std;
class Result{
private:
int MathsMarks, EnglishMarks;
public:
void setdata(int x, int y)  {
MathsMarks = x;
EnglishMarks = y;
  }
void printdata(){
cout<<"MathsMarks = " << MathsMarks << endl;
cout<<"EnglishMarks = " << EnglishMarks << endl;
  }
};
int main(){
cout<<endl;
Result mm; 
mm.setdata(98, 67);
mm.printdata();
cout<<endl;
return 0;
} 