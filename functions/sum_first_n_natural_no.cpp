#include <iostream>
using namespace std;

int sum(int n)
{
    int sum1 = 0;
    // for(int i=1;i<=n;i++){
    //     sum1= sum1 + i;
    // }
    sum1 = (n * (n + 1)) / 2;
    return sum1;
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n);
}