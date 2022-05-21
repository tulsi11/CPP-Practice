#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    // string s1,s2;
    // cin>>s1;
    // cin>>s2;
    // cout<<s1.append(s2); //concatenate s2 in s1 and update s1
    // string str = s1 + s2;
    // cout<<str[4]; //accessing char in string
    // str.clear();
    // cout<<str<<endl;

    // if(!s1.compare(s2)){
    //     cout<<"Equal";
    // }

    //checking for string is empty or not
    // string str="abc";
    // str.clear();
    // if(str.empty()){
    //     cout<<"Empty";
    // }

    //Erase some chars
    // string str="Tulsi";
    // cout<<str.erase(2,2); //removes ls

    //finds chars
    // string str = "Tulsi";
    // cout<<str.find("ls")<<endl;

    //insert chars
    // string s = "Tui";
    // cout<<s.insert(2,"ls")<<endl;

    //Finding length
    // string str = "Tulsi";
    // cout<<str.length()<<endl; //.length or .size can be used

    //finding substring
    // string str = "TulsiChopade";
    // cout<<str.substr(5,7);

    //String to integer
    // string str = "55";
    // int x = stoi(str);
    // cout<<x+5;

    //Integer to String
    // int x=29;
    // cout<<to_string(x) + "2";

    //Sorting
    string s="zyx";

    sort(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}