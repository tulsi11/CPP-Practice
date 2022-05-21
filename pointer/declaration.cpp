#include <iostream>
using namespace std;
int main(){
    int a=10;
    int *aptr = &a;
    cout<<*aptr<<endl;
    *aptr=20;
    cout<<a;

    // int arr[3]={1,2,3};
    // //cout<<*arr; //1
    // int ptr=*arr;
    // for(int i=0;i<3;i++){
    //     cout<<*(arr+i)<<" ";
    //     //ptr++;
    // }

    return 0;
}