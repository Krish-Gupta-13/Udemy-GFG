#include<bits/stdc++.h>
using namespace std;
class School{
public:
void Schoolbellsound(){
cout << "The School makes a sound "<<endl;
}
};
// Derived class
class SchoolBenchSound : public School {
public:
void Schoolbellsound() {
cout << "TheSchoolBenchSound says: wen wen "<<endl ;
}
};
// Derived class
class SchoolChairSound : public School {
public:
void Schoolbellsound() {
cout << "The SchoolChairSound says: ken ken \n" ;
    }
};
int main(){
 cout<<endl;
School mySchool;
SchoolBenchSound  mySchoolBenchSound;
SchoolChairSound  mySchoolChairSound ;
mySchool.Schoolbellsound();
mySchoolBenchSound.Schoolbellsound();
mySchoolChairSound .Schoolbellsound();
cout<<endl;
return 0;
}