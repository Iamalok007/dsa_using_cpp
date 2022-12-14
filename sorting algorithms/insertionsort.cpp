#include<iostream>
using namespace std;

void insertionsort(int arr[], int n){
    int j;
for(int i=0;i<n;i++){
    int key=arr[i];
    j=i-1;
    while(j>=0&&arr[j]>key){
        arr[j+1]=arr[j];
        j=j-1;
    }
    
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
    insertionsort(arr , n);
    cout << "Sorted array: \n";
    print_array(arr, n);
     return 0;
} 