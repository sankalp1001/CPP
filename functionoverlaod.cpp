#include<iostream>
using namespace std;


int area(int s){
    return s*s;
}
int area(int l,int b){
    return l*b;
}
float area (float r){
    return 3.14*r*r;
}
 int main(){
  int a, b;
  int s;
  float r;
  cout << "Enter raduis of circle"<<endl;
  cin >> r;
  cout << "Enter the side of square"<<endl;
  cin >> s; 
  cout << "Enter the length and breadth of rectangel:"<<endl;
  cin >> a >>b;
  cout << "Area of Circle: "<<area(r)<<endl << "Area of square: "<<area(s)<<endl<<"Area of Rectangle:"<<area(a,b)<<endl; 

     return 0;
 }
