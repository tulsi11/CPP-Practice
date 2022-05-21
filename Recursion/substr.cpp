#include<iostream>
using namespace std;

void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    subseq(ros,ans); //Not adding any char
    subseq(ros,ans+ch); //adding next char
}
int main(){
    string s;
    cin>>s;
    subseq(s,"");
    return 0;
}