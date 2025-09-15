#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int a[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Repeated elements are:";
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (a[i]==a[j]){
                cout<<a[i]<<"\t";
            }
        }
    }
}