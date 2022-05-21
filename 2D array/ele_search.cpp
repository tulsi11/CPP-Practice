#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int target;
    cin>>target;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    // bool flag=false;
    int r=0,c=n-1; //top right ele

    while(r<m && c>=0){
        if(a[r][c]==target){
            cout<<"found";
            break;
        }
        else if(a[r][c]>target){
            c--; //traverse towards left
        }
        else if(a[r][c]<target) {
            r++; //traverse down
        }
        else{
            cout<<"Not found";
        }
    }

    return 0;
}