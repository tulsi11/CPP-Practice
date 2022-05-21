#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    //input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    //Searching
    int x;
    cout << "Enter an element to find: ";
    cin >> x;
    bool flag;
    //output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << i << " " << j << endl;
                flag = true;
            }
        }
    }

    if (flag == true)
    {
        cout << "Element found";
    }
    else
    {
        cout << "Element Not found";
    }

    return 0;
}