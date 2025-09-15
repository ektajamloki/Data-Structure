#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"Enter size of a1: ";
    cin>>n1;
    int a[n1];
    cout<<"Enter elements:";
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    int n2;
    cout<<"Enter size of b1: ";
    cin>>n2;
    int b[n2];
    cout<<"Enter elements:";
    for(int i =0;i<n2;i++){
        cin>>b[i];
    }
    int n3=n1+n2;
    int c[n3];
    for(int j=0;j<n1;j++){
        c[j]=a[j];
    }
    for(int i=0;i<n2;i++){
        c[n1+i]=b[i];
    }
    for(int k=0;k<n3;k++){
        cout<<c[k];
    }
}