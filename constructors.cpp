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
  Complex c(4,6);
  c.getData(); 
 
    return 0;
}
