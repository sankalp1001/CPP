#include <iostream>
using namespace std;
void swap(int a, int b){
 int temp;
 temp = a;
 a = b;
 b=temp; 
}
 void swapPointer(int* a, int* b){
  int temp;
  temp =*a ;
  *a = *b;
  *b = temp;
 }
 void swapreferanceVar(int &a,int &b){
  int temp;
  temp = a;
  a = b;
  b=temp;
 }

int main(){
   int num1, num2;
   cout << "Enter a:";
   cin >> num1;
   cout << "Enter b:";
   cin >> num2;
   //swaping by calling by value
   swap (num1,num2);
   cout <<"calling by value"<<endl;
   cout << "a:"<< num1 << endl << "b:"<< num2 << endl;
 //  swapPointer (&num1,&num2);
//    cout <<"calling by pointer reference"<<endl;
//    cout << "a:"<< num1 << endl << "b:"<< num2 << endl;
   swapreferanceVar(num1,num2);
   cout <<"calling by reference variables"<<endl;
   cout << "a:"<< num1 << endl << "b:"<< num2 << endl;
    return 0;
}
