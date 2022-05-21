#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char ch[n+1];
    cin.getline(ch,n);
    cin.ignore();

    int i=0;
    int currlen =0;
    int maxlen =0;
    int st=0,maxst=0;
    while (1)
    {
        if(ch[i] ==' ' || ch[i]=='\0'){
            if(currlen > maxlen){
                maxlen = currlen;
                maxst = st;
            }
            currlen =0;
            st = i+1;
        }
        else{
            currlen++;
        }
        
        if(ch[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxlen<<endl;
    for(int i=0;i<maxlen;i++){
        cout<<ch[i + maxst];
    }
    return 0;
}