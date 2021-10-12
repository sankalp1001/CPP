#include<iostream>
using namespace std;

class Sample{
int a;
int b; 
int c;
public:
 Sample(int x,int y=9,int z=10){
 a=x;
 b=y;
 c=z;
 }
 void getData(){
     cout<<"a="<<a<<endl<<"b="<<b<<endl<<"c="<<c<<endl;
 }
};
int main(){
   Sample s(1,5);
   s.getData();
    return 0;
}
