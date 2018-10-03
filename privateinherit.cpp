//private inheritence(public and protected act as the private)
#include<iostream>
#include<string>
using namespace std;
class person{
  protected:
    string name;
  public:
    void setname(string iname)
    {
      name=iname;
    }
};

class student : private person
{
  public:
    void display()
    {
      cout<<name<<endl;
    }
   void studentsetname(string iname)
   {
       setname(iname);
   }
};

class Gstudent : public student
{
  public:
    void setGstudentname(string iname){
    studentsetname(iname);}
};
int main()
{
   Gstudent sonia;
   sonia.setGstudentname("sonia");
   sonia.display();
   return 0;
}
