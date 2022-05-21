#include <iostream>
using namespace std;
int main(){
    //FOR EXAMPLE
    
    int amt;
    cin>>amt;
    if(amt<5000){
        cout<<"om";
    }
    else{
        cout<<"Akash"<<endl;
    }
    
   /////////////////////////////////////////////////////////////////////////////////////////////////////////
   //BIGGER OF 3 NOS
   int a,b,c;
   cin>>a>>b>>c;
   if(a>b){
       if(a>c){
           cout<<a<<" is larger";
       }
       else{
           cout<<c<<" is larger";
       }
   }
   else{
       if(b>c){
           cout<<b<<" is larger";
       }
       else{
           cout<<c<<" is larger";
       }
   }
   
   ////////////////////////////////////////////////////////////////////////////////////////////////////////////EVEN OR ODD
   int n;
   cout<<"\nEnter a number: ";
   cin>>n;
   if(n%2==0){
       cout<<n<<" is even";
   }
   else{
       cout<<n<<" is odd";
   }
   //////////////////////////////////////////////////////////////////////////////////////////////////////////// SCELENE, EQUILATERAL OR ISOCELES TRIANGLE
   int s1,s2,s3;
   cin>>s1>>s2>>s3;
   if( s1==s2 && s2==s3){
       cout<<"Eqilateral Triangle"<<endl;
   }
   else if (s1==s2 || s2==s3 || s1==s3)
       {
           cout<<"Isosceles Triangle"<<endl;
       }
    else{
        cout<<"Scelene Triangle"<<endl;
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////VOWEL OR CONSONANT
    char d;
    char isLowerCase, isUpperCase;

    cout<<"Enter an alphabet: ";
    cin>>d;

    isLowerCase = (d == 'a' || d== 'e' || d=='i' || d=='o' || d=='u');
    isUpperCase = (d =='A' || d == 'E' || d=='I' || d=='O' || d=='U');

    if(isLowerCase || isUpperCase){
        cout<<d<<" is vowel";

    }
    else{
        cout<<d<<" is consonant";
    }
   return 0;
}