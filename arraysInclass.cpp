#include<iostream>
using namespace std;
class shop{
int n;
int itemId[100];
int itemPrice[100];
int counter=0;
public:
 void setPrice(void);
 void setNum(void);
 void dispPrice(void);
};
void shop :: setNum(void){
 cout<< "Enter the number of Items:"<<endl;
 cin>>n; 
}
void shop :: setPrice(void){
  setNum();
  for(int i=0;i<n;i++){ 
  cout << "Enter the price of "<< counter +1 << " item"<<endl;
  cin >> itemPrice[counter];
  itemId[i]= counter;
  counter ++;
  }
}
void shop :: dispPrice(void){
 cout << "Price of all the Items mentioned :"<<endl;
 for(int i=0;i<n;i++){
 cout<< itemId[i]<< "\t"<< itemPrice[i]<<endl; 

 } 
}
int main(){
  shop s;
  s.setPrice();
  s.dispPrice();

    return 0;
}
