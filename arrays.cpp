#include <iostream>
using namespace std;

int main(){
//declaring an array    
int arr[100];
//amending to an array
 for (int i=0;i<5;i++){
  arr[i]=i;
 }
 //printing the array
 int j=0;
 do {
 cout << arr [j] << endl;
 j++;
 }
 while(j<5);
 //pointers and arrays
int* p = arr;
cout<<"Value of arr[0]:"<<*p<<endl;
cout<<"Value of arr[1]:"<<*(p+1)<<endl; 
cout<<"Value of arr[2]:"<<*(p+2)<<endl;  
return 0;
}
