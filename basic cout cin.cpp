#include <iostream> 
using namespace std;
int c;
int main(){
    
   //float a , b;
//    cout << "Enter a number:";
//    cin >> a;
//    cout << "Enter another number:";
//    cin >> b; 
//    cout << "Sum:" << a+b << endl;
    // cout << "printing size of 32.4 "<< sizeof(32.4)<<endl;
    // cout << "printing size of 32.4f "<< sizeof(32.4f)<<endl;
    // cout << "printing size of 32.4F "<< sizeof(32.4F)<<endl;
    // cout << "printing size of 32.4l "<< sizeof(32.4l)<<endl;
    // cout << "printing size of 32.4L "<< sizeof(32.4L)<<endl;
   c = 65;
   ::c=45;
   cout << "local c: " << c <<endl << "global c: " << ::c << endl;
   
   return 0;
}
