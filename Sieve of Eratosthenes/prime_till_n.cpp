#include<iostream>
using namespace std;
void PrimeSieve(int n){
    int a[100] = {0};

    for(int i=2;i<=n;i++){
        if(a[i]==0){
            for(int j=i*i;j<=n;j = j+i){
                a[j]=1;
            }
        }
    }
    int flag=0;
    for(int i=2;i<=n;i++){
        if(a[i]==0){
            cout<<i<<" ";
            flag++;
        }
    }
    cout<<"\nTotal nos: "<<flag;
}

int main(){
    int n;
    cout<<"Enter range till: ";
    cin>>n;
    PrimeSieve(n);
    return 0;
}