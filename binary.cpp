#include <iostream>

using namespace std;
int fun(int ar[],int a)
{

    int start=0;
    int end=sizeof(ar);
    int mid=0;

while(start<=end)
{
    mid=(start+end)/2;
    if(ar[mid]==a)
    {
        return mid;
    }
    else if(ar[mid]<a)
    {
  start=mid+1;
    }
    else{
        end=mid-1;6
    }
}
return -1;
}

int main()
{
//binary search ..
int ar[]={2,3,4,5,6,7,8};
int t,m;
cout<<"enter the no";
cin>>m;

t=fun(ar,m);
cout<<t;


}
