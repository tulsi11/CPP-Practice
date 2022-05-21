
#include<iostream>
using namespace std;
int main(){
    int num,i;
    cout<<"Eneter a number: ";
    cin>>num;
    // printing all odd nos
    for(i=0;i<num;i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<endl;
    }

    //finding whether given number prime or not
   for(i=2;i<num;i++){
       if(num%i==0){
           cout<<num<<"Not a prime"<<endl;
            break;
       }
    }
    if(i==num){
        cout<<num<<"Prime"<<endl;
    }

    // printing all prime nos in given range
    int a,b;
    cout<<"Enter two nos: ";
    cin>>a>>b;
    for(int n=a;n<b;n++){
        for(i=2; i<n; i++){
            if(n%i==0){
                break;
            }
        }
        if(i==n){
            cout<<n<<" ";
        }
    }
   
    return 0;

}