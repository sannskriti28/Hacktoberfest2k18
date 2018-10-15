//TRANSPOSE OF MATRICES
#include<iostream>
using namespace std;
int main()
{
  int mat[3][3],i,j,matr[3][3];
  cout<<"Enter the elements of first matrices: "<<endl;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      cin>>mat[i][j];
    }
  }
  cout<<"AFTER TRANSPOSING, WE HAVE: "<<endl;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      matr[i][j]=mat[j][i];
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      cout<<matr[i][j];
    }
    cout<<"\n";
  }
  return 0;
}
