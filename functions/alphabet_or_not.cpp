#include<iostream>
using namespace std;

void alphabet(char ch){
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
        cout<<"Alphabet"<<endl;
    }else{
        cout<<"Not an alphabet";
    }
    return;

}
int main(){
    char ch;
    cin>>ch;
    alphabet(ch);
    return 0;
}
    
