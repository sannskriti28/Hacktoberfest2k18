//LINEAR SEARCH IN 1-D ARRAY
#include<iostream>
using namespace std;
int main()
{
  int arr[100],size,i,num,c=0,pos;
  cout<<"Enter array size: "<<endl;
  cin>>size;
  for(i=0;i<size;i++)
  {
    cin>>arr[i];
  }
  cout<<"Enter the element you want to search: "<<endl;
  cin>>num;
  for(i=0;i<size;i++)
  {
    if(arr[i]==num)
    {
      c=1;
      pos=i+1;
      break;
    }
  }
  if(c==0)
  {
    cout<<"Number not found!!!"<<endl;
  }
  else
  {
    cout<<"Number at position: "<<pos<<endl;
  }

  return 0;
}
