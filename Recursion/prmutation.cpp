#include <iostream>
using namespace std;
void permutation(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    for(int i=0;i<s.length();i++){
        char ch= s[i];
        string ros = s.substr(0,i) + s.substr(i+1); //substr = starting from 0 and length is i

        permutation(ros,ans + ch);
    }
}
int main(){
    permutation("ABC","");
    return 0;
}