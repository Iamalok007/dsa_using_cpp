#include<iostream>
using namespace std;
void hanoi(int n,char A, char B, char C){
    if(n>0){
            hanoi(n-1,A,C,B);
            cout<<"moving disc"<<n<<"from "<<A<<" "<<C<<endl;
            hanoi(n-1,B,A,C);
    }
}
int main(){
    int n;
    cout<<"enter the value of no of discs";
    cin>>n;
    hanoi(n,'A','B','C');
    return 0;
}