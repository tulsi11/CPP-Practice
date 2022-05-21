#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int i;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum;
    cin>>sum;
    int curr = 0;
    for(int i=0;i<n;i++){
        curr = 0;
        for(int j=i;j<n;j++){
            if(curr==sum){
                cout<<i+1<<" "<<j;
            }else if(curr>sum){
                curr = 0;
            }
            else if(curr<sum){
                curr +=a[j];
            }
        }
    }
    return 0;
}