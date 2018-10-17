#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
struct Node* head;
void insert(int x)
{
    Node* temp = new Node(4);
    temp->data=x;
    if(head!=NULL)
    {
        temp->next=head;
        head=temp;
    }
}
void print()
{
    Node* temp=head;
    while(temp!=NULL)
    {

        cout<<temp->data;
        temp=temp->next;
    }

    cout<<"\n";
}
int main()
{
    head=NULL;
    cout<<"How many numbers?"<<endl;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
{
    cout<<"Enter the number: "<<endl;
    cin>>i;
}
void insert(int x);
void print();
return 0;
}
