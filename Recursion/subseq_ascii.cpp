#include <iostream>
using namespace std;

void ascii(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    ascii(ros,ans);
    ascii(ros, ans+ch);
    ascii(ros, ans + to_string(code));
}

int main(){
    string s="AB";
    string ans;
    ascii(s,ans);
    return 0;
}