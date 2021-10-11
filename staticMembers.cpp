#include <iostream>
using namespace std;
class employee{
static int count;
int id;
public:
 void setData(void){
   cout << "Enter the id:"<<endl;
   cin >> id;
   count ++;
 }
 void getData(void){
  cout << "The id is "<< id<<endl; 
 }
 static void Count(void){
cout<<"count is "<<count<<endl; 

 }
};
int employee :: count ;

 int main(){
  employee sankalp;
  sankalp.setData();
  sankalp.getData();
  employee::Count();
   return 0;  
 }



