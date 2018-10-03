//Passing structure to function by Value,Address
#include<iostream>
using namespace std;
struct student
{
  int roll_no;
  char sex;
  int age;
};
void display(student s);
void show(student *s);
int main()
{
  student anil={132,'m',13};
  display(anil);
  show(&anil);
  return 0;
}

void display(student s)
{
  cout << s.roll_no << endl;
  cout << s.sex << endl;
  cout << s.age << endl;
}

void show(student *s)
{
  cout << s->roll_no <<endl;
  cout << s->sex <<endl;
  cout<< s->age <<endl;
}
