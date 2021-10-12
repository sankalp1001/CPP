#include<iostream>
using namespace std;
class Complex{
 int a,b;
public:
 Complex(int,int);
 void getData(void){
  cout<<a<<" + i"<<b<<endl;
 }
};
Complex::Complex(int x,int y){
 a=x;
 b=y;
}
int main(){
  Complex c1(4,6);
  c1.getData(); 
  Complex c2= Complex(5,7);
  c2.getData();
    return 0;
}
