#include <iostream>
using namespace std;
//function prototype
int sum (int,int);
int main(){
   int num1,num2;
   //num1, num2 : actual parameters
   cout << "Enter a number:";
   cin >> num1;
   cout << "Enter another number:";
   cin>> num2;
   cout << "sum of given numbers is " << sum(num1,num2)<<endl;
    return 0;
}
//function
// a,b :formal parameters
int sum (int a, int b){
 int c;
 c=a+b;
 return c;
}
