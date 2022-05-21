#include<iostream>
using namespace std;
int main(){
    // int array[4];
    // array[0] = 10;
    // array[1] = 20;
    // array[2] = 30;
    // array[3] = 40;
    // cout<<array[0];

    int n;
    cin>>n;
    int arr[n];
    
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}