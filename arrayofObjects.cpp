#include<iostream>
using namespace std;
class employee{
  int id;
  static int count; 
  public :
  void setData(void){
  cout << "Enter the id:"<<endl;
  cin>> id; 
  count ++;
  }
  void getData(void){
  cout<<"The id of this employee is "<<id<<endl;
  }
    static void getCount(void){
        cout<<"The value of count is "<<count<<endl;}
};

int employee :: count;

int main(){
   employee mrm[100];
   for (int i=0;i<5;i++){
   mrm[i].setData();
   mrm[i].getData();
   employee::getCount();
   }

    return 0;
}
