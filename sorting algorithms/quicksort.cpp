#include<iostream>
using namespace std;

int partitionindex(int ar[],int start,int end)
{
int pivot=ar[end];
int i=start-1;
for(int j=start;j<=end-1;j++){
    if(ar[j]<pivot){
        i++;
        int t=ar[i];
        ar[i]=ar[j];
        ar[j]=t;
        
    }
}

int t=ar[i+1];
ar[i+1]=ar[end];
ar[end]=t;

return (i+1);
}

void quick(int ar[],int start,int end)
{
    if(start<end)
    {
        int pindx=partitionindex(ar,start,end);
        quick(ar,start,pindx-1);
        quick(ar,pindx+1,end);
    }
}
void printarray(int ar[],int n)
{
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}
int main()
{
    int arr[]={24, 9, 29, 14, 19, 27};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"array before sorting"<<endl;
    printarray(arr,n);
    cout<<"array after sorting"<<endl;

    quick(arr,0,n-1);
    printarray(arr,n);
    cout<<"this is end";
return 0;
}
