#include<bits/stdc++.h>
using namespace std;
struct Node
{
int data;
struct Node* next;
};
struct Node* head;//global variable
//inserting at the end;

void insert(int data)
{

Node* temp=new Node();
temp->data=data;
if(head==NULL)
{
 temp->next=NULL;
 head=temp;
 return;

}
struct Node* temp1=head;
while(temp1->next!=NULL)
{
    temp1=temp1->next;
}
temp1->next=temp;;
temp->next=NULL;

}

void print()
{
struct Node* temp=head;
while(temp!=NULL)
{
 cout<<temp->data;
 temp=temp->next;

}
cout<<"\n";
}

//deleting a varaible at position n
void Delete(int n)
{
struct Node* temp1=head;
if(n==1)
{
    head=temp1->next;
    free(temp1);
    return;
}
for(int i=0;i<n-2;i++)
{
    temp1=temp1->next;
}

struct Node* temp2=temp1->next;
temp1->next=temp2->next;
free(temp2);

}
int main()
{
    head=NULL;
    insert(2);
    insert(3);
    insert(4);
    insert(5);
       
  
    insert(6);
    insert(7);
    print();
   int n;

    cout<<"enter the position you want to delete";
    cin>>n;
    Delete(n);
    print();
   
    }
