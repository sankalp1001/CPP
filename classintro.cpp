# include <iostream>
using namespace std;
 
class student {
 private:
 int roll, marks;
 public :
 int percent=85;
  void setData(int roll1, int marks1);
  void getData(){
    cout << "Roll no:"<< roll << endl;
    cout << "Marks:" << marks << endl;
    cout << "Percentage:" <<percent<<endl;
  }
}; 
void student :: setData(int roll1, int marks1){
 roll = roll1;
 marks = marks1;
}

int main(){
  student  Sankalp ;
  Sankalp.setData(22,85);
  Sankalp.getData();
    return 0;
}
