#include<iostream>
using namespace std;

class areacalc{
    public:
    float length,breadth;
    void arcalc(){
        cout<<"Enter length:";
        cin>>length;
        cout<<"Enter breadth:";
        cin>>breadth;
        cout<<"Area of rectangle:"<<area<<endl;
    }
    private:
    float area = (length*breadth);
};
int main(){
    areacalc ar;
    ar.arcalc();
    return 0;
}