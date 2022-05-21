#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int flag=0; //flag for detecting whether loop gets terminated by break or condition

    for(int i=2;i<=sqrt(n);i++){ //sqrt function for reducing the no of iterations
        if(n%i==0){
            cout<<"Not prime"<<endl;
            flag=1;
            break;
        }
    }

    if(flag==0){
        cout<<"Prime";
    }
    return 0;
}