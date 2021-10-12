#include<iostream>
using namespace std;
class complex{
  int a,b;
  public:
  void setData();
  void getData();
  friend complex addcomplex(complex o1,complex o2);
};
void complex::setData(){
 cout<<"Enter the complex number"<<endl;
 cin>>a>>b; 
}
void complex::getData(){
 cout<<"the complex number is :"<<a<<" + i"<<b<<endl;
}
complex addcomplex(complex o1,complex o2){
  complex o3;
  o3.a = o1.a + o2.a;
  o3.b = o1.b + o2.b; 
  return o3;
}

int main(){
    complex c1,c2,c3;
    c1.setData();
    c1.getData();
    c2.setData();
    c2.getData();
    c3 = addcomplex(c1,c2);
    cout<<"c3"<<endl;
    c3.getData();
    return 0;
}
