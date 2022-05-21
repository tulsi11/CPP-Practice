//Remove repeatating consecutive characters in string

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s="aabbccddeeeeeff";
    for(int i=0;i<s.size();i++){
        if(s[i-1]==s[i]){
            s.erase(i-1,1);
            i--;
        }
    }
    cout<<s<<endl;
    return 0;
}