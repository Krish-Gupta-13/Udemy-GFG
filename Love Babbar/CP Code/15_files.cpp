#include <bits/stdc++.h>
using namespace std; 
int main(){
char name[100]; 
ofstream outfile;
outfile.open("namefile.dat"); 
cout << "Things written in the terminal will also be written in namefile " << endl;
cout << "Enter your name: ";
cin.getline(name, 100); 
outfile << name << endl; 
cout << "Enter your age: ";
cin >> name;
cin.ignore(); 
outfile << name << endl; 
outfile.close(); 
ifstream infile;
infile.open("namefile.dat");
cout << "Reading from the file" << endl;
infile >> name;
cout << name << endl; 
infile >> name;
cout << name << endl; 
infile.close(); 
return 0;
}





























// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
// // Create and open a text file
// ofstream MyFile("filename.txt");
// // Write to the file
// MyFile << "Files can be tricky, but it is fun enough!";
// // Close the file
// MyFile.close();
// }




// 09 inheritance








// #include<iostream>
// using namespace std;
// class polygon{
//      protected:
//     float length, breadth;
//      public:
// void set_name(float a, float b){
//    length = a;
//    breadth = b;	
//     }
//     void get_name(float a, float b){
        
//     }
//  };
// class Rectangle_peri: public polygon{
// public:
// void perimeter(void){
//  cout<<(2*(length + breadth))<<endl;
//     } 
//  };
//  class Rectangle_area: public polygon{
// public:
// void area(void){
//  cout<<(length * breadth)<<endl;
//    } 
//   };
// int main(){
// Rectangle_peri peri;
// Rectangle_area area;
// peri.set_name (5,3);
// area.set_name (2,5);
// // cout <<"perimeter of Rectangle : " <<Rectangle_peri() << endl;
// // cout <<"perimeter of Triangle : "<< Rectangle_area() << endl;
// Rectangle_area();
// Rectangle_peri();
// return 0;
//  }
