#include<iostream>
using namespace std;
void odd_even(int n){
    if(n%2 == 0){
        cout<<"Even"<<endl;
    }else{
        cout<<"Odd";
    }
    return;

}
int main(){
    int n;
    cin>>n;
    odd_even(n);
}