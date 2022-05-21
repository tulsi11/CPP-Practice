#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    //Sum of even nos in array
    for(i =0;i<n;i++){
        if(arr[i]%2 == 0){
        sum = sum + arr[i];  
        }
    }
    cout<<sum;
    

    return 0;
}