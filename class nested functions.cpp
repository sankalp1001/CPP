#include <iostream>
#include <string>
using namespace std;

class binary{
   string s;
   void check(void);
   void input(void);
   void complement(void);
   public:
   void disp(void);

};
void binary :: check(void){
 for (int i = 0; i < s.length(); i++){
    if(s.at(i)!='0' && s.at(i)!='1'){
       cout <<"Incorrect Binary format"<<endl;
       exit(0); 
    }
 }

}
 void binary :: input (void){
 cout << "Enter a binary number:"<<endl;
 cin >> s;
 check();
 }
 void binary :: complement(void){
   input();
   //cout<<"in complement"<<endl;
   for (int i=0;i<s.length();i++){
      //cout<< "in complement for"<<endl;
   if(s.at(i)=='0'){
      //cout<< "in complement if"<<endl;
   s.at(i)='1';
   }
   else {
      // cout<< "in complement else"<<endl;
      s.at(i)='0';}
   }
 }
 void binary :: disp(void){
 complement();
  //cout<< "in disp"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
       //cout<<"in disp for"<<endl;
        cout <<  s.at(i);
    }
   cout<<endl;
 }
 int main(){
  binary b;
 // b.complement();
 b.disp();
    return 0;
 }
