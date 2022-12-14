#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}

void selectionsort(int arr[], int n){
    int min_idx;
    for(int i=0;i<n-1;i++){
        min_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx])
                min_idx=j;

             } 
              //swappinmg the found element
            if(min_idx!=i)
                swap(&arr[min_idx], &arr[i]);

        
    }
}

void print_array(int arr[], int n )
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        cout<<endl;

    }
}
int main()
{
    
    int arr[]={1,5,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr , n);
    cout << "Sorted array: \n";
    print_array(arr, n);
     return 0;
} 