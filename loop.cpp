#include<iostream>
using namespace std;
int main(){
    // continue
    // Printing all numbers except divisible by 2
    for(int i=0;i<20;i++)
    {
        if(i%2==0){
            continue;
        }
        cout<<i<<endl;
    }

    // break
    // will print numbers from 1 to 10 with break
    for(int i=0;i<20;i++){
        if( i==11){
            break;
        }
        cout<<i<<endl;
    }
    return 0;
}