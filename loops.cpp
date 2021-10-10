# include <iostream>
using namespace std;
int main (){
 cout << "for"<<endl;
 for (int i=0;i<3;i++){
   if(i==2){break;}
   cout << i<< endl;
   
 }
cout << "while"<<endl;
int i=0;
while (i<3){
 i++;
 if (i==1){continue;} 
cout << i<<endl;
}
cout << "do while"<<endl;
int j =0;
do {
    cout << j<< endl; 
    j++;
}
while (j<3);
    return 0;
} 
