#include<iostream>
using namespace std;
class complex{
 int a,b;
 public:
 void setData(void){
  cout<<"enter the complex number"<< endl;
  cin>>a>>b;
 }
 void getData(void){
  cout<<"The complex number is "<<a<<" + i"<<b<<endl;

 }
 void add(complex o1,complex o2){
  a = o1.a +o2.a;
  b = o1.b +o2.b;
 }
};

int main(){
  complex c1,c2,c3;
  c1.setData();
  c1.getData();
  c2.setData();
  c2.getData();
  c3.add(c1,c2);
  c3.getData();

    return 0;
}
