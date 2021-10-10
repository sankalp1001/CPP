#include <iostream>
using namespace std;

int simpleInterst(int principle,const int time, float rate =2){
  
 return principle+principle*rate*time;

}
int main(){
   int P,t;
   float r;
 cout << "Enter the principle amount :"<<endl ;
 cin >> P;
 cout << "Enter time in years:"<<endl;
 cin >> t;
 cout << "Enter the rate if changed, or enter 0"<<endl;
 cin >> r;
 if (r==0){ cout << simpleInterst(P,t)<<endl;}
 else cout<<simpleInterst(P,t,r)<<endl;
    return 0;
}
