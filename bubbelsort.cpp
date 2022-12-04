#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}

void bubblesort(int arr[], int n)
{
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-i-1;j++){
          if(arr[j]>arr[j+1])
            swap(&arr[j],&arr[j+1]);

        }
    }
}

void printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        cout<<endl;

    }
}

int main(){
    int arr[]={1,4,3,5,68,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr , n);
    cout << "Sorted array: \n";
    printarray(arr, n);
     return 0;
}