#include<iostream>
using namespace std;
int main(){
 int arr1[100],arr2[100],index[200];
 int n;
 int idx=0;
 cout<<"enter the values of n and m";
 cin>>n;
 cout<<"enter the values of first array";
 for(int i=0;i<n;i++){
    
    cin>>arr1[i];

 }
cout<<"enter the values of first second";
 for(int i=0;i<n;i++){
    
    cin>>arr2[i];

 }

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(arr2[j]==arr1[i]){
           index[idx]=arr1[i];
           idx+=1;
           break;
        }
    }
}

for(int i=0;i<idx;i++){
    cout<<index[i]<<" ";

}
return 0;
}
