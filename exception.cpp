#include<iostream>
#include<conio.h>
using namespace std;
void factorial(int a)
{  int fact=1;
   
	try
	{
		for(int i=1;i<=a;i++)
		{
			fact=fact*i;
		}
		
		if(fact>120)
		{
			throw "bye";
		}
	}
	catch(char const *d)
	{
		cout<<"Exception Caught"<<endl;
	}
}
main(){
	int c;
	cout<<"Enter the number:";
	cin>>c;
	factorial(c);
	return 0;
}
