#include <iostream>
using namespace std;
void TowerOfHonoi(int n,char src,char dest,char helper){
    if(n==0){
        return;
    }
    TowerOfHonoi(n-1,src, helper, dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    TowerOfHonoi(n-1,helper,dest,src);
}
int main(){
    TowerOfHonoi(3,'A','B','C');
    return 0;
}