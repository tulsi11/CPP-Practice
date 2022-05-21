// Get an element on a specific position if no is represented in binary form
#include <iostream>
using namespace std;
int getBit(int n,int pos){
    return((n & (1<<pos)) !=0); //left shift operator
}
int main(){
    cout<<getBit(5,2); //0101 = element at 2 i.e. 1 (indexing starts from right to left)
    return 0;
}