# include <iostream>
using namespace std;
int main(){
 int i;
 cout << "Enter a number:"<<endl;
 cin >> i; 

 if (i<0){
   cout<<"Number is negative"<<endl; 
 }
 else if (i==0)
  cout <<"Number is equal to 0"<<endl;
else 
  cout << "Number is positve" << endl;

int day;
cout << "Enter a number :"<< endl;
cin >> day;
switch (day)  {
 case 1 :
 cout << "Monday";
 break;
 case 2:
 cout << "Tuesday";
 break;
 case 3:
 cout << "Wednesday";
 break;
 case 4 :
 cout << "Thursday";
 break;
 case 5 :
 cout << "Friday";
 break;
 case 6 :
 cout << "Saturday";
 case 7 :
 cout << "Sunday";
 break;
 default:
 cout << "Number out of range";
 break;

}
    return 0;
}
