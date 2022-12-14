#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
struct Node* next;
};
struct Node* head;
void reverse()
{
    struct Node *current, *prev, *next;
    current=head;
    prev=NULL;
    while(current!=NULL)
    {
          next=current->next;
          current->next=prev;
          prev=current;
          current=next;

    }
    head=prev;
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
void insert(int data)
{
Node* temp=new Node();
temp->data=data;
if(head==NULL)
{
    head=temp;
    temp->next=NULL;
    
    return;

}
struct Node* temp1=head;
while(temp1->next!=NULL)
{
    temp1=temp1->next;

}
temp1->next=temp;
temp->next=NULL;
}
int main()
{
    head=NULL;
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    print();
    reverse();//after reversal;
    print();

}