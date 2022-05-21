#include <iostream>
using namespace std;

 int main(){

     int arr[5]={94,65,12,44,-1};

     for(int i =0;i<5;i++){
         if(arr[i]<0){
             break;
         }
         
        else if ((arr[i]%10 == 4) && arr[i]<53 ){
            arr[i] = -9;
        }
        else if(arr[i]%10 == 4){
            int temp;
            arr[i]= -7;
        }
        else if(arr[i]<53){
            arr[i] = -1;
        }
        cout<<arr[i]<<endl;
    }
     return 0;
 }