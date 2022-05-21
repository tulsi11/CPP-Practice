//Form the biggest no using numeric string

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s="15324";
    // sort(s.begin(),s.end());
    // for(int i=s.length();i>=0;i--){
    //     cout<<s[i];
    // }

    //2nd approach
    sort(s.begin(),s.end(), greater<int>());
    
    cout<<s;

}