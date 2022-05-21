#include <iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=2,b=4;

    int *aptr=&a;
    int *bptr=&b;
    swap(a,b); //or swap(&a,&b) if *aptr and *bptr not defined
    cout<<a<<" "<<b<<endl;
    return 0;
}