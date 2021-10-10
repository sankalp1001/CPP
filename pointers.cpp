# include <iostream>
using namespace std;

int main(){
   int a;
   int* b = &a;
   cout << "Address of a:"<<b<<endl; 
   int** c = &b;
   cout << "Address of pointer b:"<<c<<endl;
    return 0;
}
