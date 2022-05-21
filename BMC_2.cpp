#include <iostream>
using namespace std;

 int main(){

    int arr[11]={3,6,36,62,121,66,26,376,661,6,-1};

    for(int i =0;i<11;i++) {
        if(i>0 && arr[i-1]%10==6 && arr[i]%10==6) {
           break;
        }else{
         cout<<arr[i]<<endl; 
       }  
    }
    return 0;
 }