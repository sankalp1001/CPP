#include <iostream>
using namespace std;
 
 inline int produc(int a,int b){
 return a*b;
 }
 
 int main (){
 int num1, num2;
 cout<<"Enter 2  numbers:"<<endl;
 cin >> num1;
 cin >> num2;
 cout << "The product of the numbers:" << produc(num1,num2)<<endl;
 return 0;
 }
