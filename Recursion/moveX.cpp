//Move all x present in the string to the end
#include <iostream>
using namespace std;

string moveAllx(string s){
    if(s.length()==0){
        return "";
    }

    char ch = s[0];

    string ans = moveAllx(s.substr(1));

    if(ch=='x'){
        return ans + ch;
    }
    return ch+ ans;
}
int main(){
    cout<<moveAllx("abxcdxexfxxxgxh");
    return 0;
}