#include<iostream>
using namespace std;

int fact(int n){
    int i;
    int fac = 1;
    for(i= 2; i<=n;i++){
        fac = fac * i;
    }
    return fac;
}
int main(){
    int n;
    cin>>n;
    int ans = fact(n);
    cout<<ans<<endl;
}