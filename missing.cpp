#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int a[n];
    cout<<"Enter elements:";
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    cout<<"Elements added:";
    for(int j=0;j<n-1;j++){
        cout<<a[j]<<"\t";
    }
    cout<<"\nMissing element:";
    for (int k=0;k<n;k++){
        if (a[k]!=(k+1)){
            cout<<(k+1);
            break;
        }
    }
}