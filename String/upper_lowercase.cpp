#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    //string s="ABCDE";
    //convert to uppercase
    // for(int i=0;i<s.length();i++){
    //     if(s[i]>='a' && s[i]<='z')
    //     s[i]-=32;
    // }


    //convert to lowercase
    // for(int i=0;i<s.length();i++){
    //     if(s[i]>='A' && s[i]<='Z')
    //     s[i]+=32;
    // }

    //In-built function

    //string s="hello";

    // transform(s.begin(),s.end(), s.begin(), ::toupper);
    string s="HELLO";
    transform(s.begin(),s.end(), s.begin(), ::towlower);

    cout<<s;
    
}
