#include <iostream>
using namespace std;

bool check(int a,int b,int c){
    if((a*a == (b*b + c*c)) || (b*b == (a*a + c*c)) || (c*c == (a*a + b*b))){
        return true;
    }
    return false;

}

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(check(a,b,c)){
        cout<<"Pytharoras Triplet";
    }else{
        cout<<"Not a pythaogoras triplet";
    }
}