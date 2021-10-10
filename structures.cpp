#include <iostream>
using namespace std;

struct student 
{   
    char section;
    int roll;
    float percent;
} ;
union costs
{
    int shoes;
    char uniform;
    float test;
};

int main (){
 enum rollassgn {Stud1,Stud2,Stud3};
 cout << "Enum assignment"<<endl;
 cout << Stud2<<endl;

 struct student stud1;
 union costs m1;
 m1.shoes = 200;
 cout<< "union output"<<endl;
 cout << m1.shoes<<endl<<m1.test<<endl;
 stud1.section = 'a';
 stud1.percent = 78;
 stud1.roll = 1;
 cout << "struct output:"<<endl;
 cout << stud1.roll<<endl<< stud1.percent<<endl<<stud1.section<<endl;
    return 0;
}
