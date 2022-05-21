#include<iostream>
using namespace std;

int swap(int n){
    int reverse_no = 0;
    while (n>0)
    {
        int lastdigit = n%10;  
        reverse_no = (reverse_no*10) + lastdigit;
        n = n/10;
    }
    return reverse_no;
}

int main(){
    int n;
    cin>>n;
    //int ans = swap(n);
    cout<<swap(n);
}