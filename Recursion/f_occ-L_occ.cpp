//find the first and last occurance of a number in array
#include <iostream>
using namespace std;
int f_occ(int arr[],int n,int i,int key){
    if(i==n){ //if key is not present
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return f_occ(arr,n,i+1,key);
}
int last_occ(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int restArray = last_occ(arr,n,i+1,key);
    if(restArray!= -1){
        return restArray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){
    int arr[5]={1,2,3,2,5};
    int n=5;
    cout<<f_occ(arr,5,0,2)<<endl;
    cout<<last_occ(arr,5,0,2)<<endl;
    return 0;
}