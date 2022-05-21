#include <iostream>
#include <string>
using namespace std;
void reverse(string s){
    if(s.length() == 0){
        return;
    }
    string ros=s.substr(1); //ros-rest of the string & substr gives the string from that number
    reverse(ros);
    cout<<s[0];
}
int main(){
    string s;
    cin>>s;
    reverse(s);
}