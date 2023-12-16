#include <bits/stdc++.h>
using namespace std;
class Mathematics{
public:
    int mathMarks = 99;
};
class English{
public:
    int engMarks = 90;
}; 

class Result: public Mathematics, public English{
public:
    void total(){
        int result;     
        result = ((mathMarks + engMarks) * 100) / 200;
        cout << " The overall result is: " << result << "%";
        cout <<endl;
    }
};
int main(){
    cout<<endl;
    Result abc;
    abc.total();   
    cout<<endl;
    return 0;
}