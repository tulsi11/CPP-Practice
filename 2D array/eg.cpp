#include<iostream>
using namespace std;

int main()
{
    int n,m,l;
    cout<<"Enter row in matrix 1";
    cin>>n;
    cout<<"Enter column in matrix 1(row in mat 2) ";
    cin>>m;
    int arr1[n][m];
    cout<<"Enter column in matrix 2";
    cin>>l;
    int arr2[m][l];

    cout<<"Enter elements in mat1";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter elements in mat2";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<l;j++)
        {
            cin>>arr2[i][j];
        }
    }
    
    int mult[n][l];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<l;j++)
        {
            mult[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<l;j++)
        {
            for(int k=0;k<m;k++)
            {
                mult[i][j] += arr1[i][k] * arr2[k][j];
                k++;
            }
            j++;
        }
        i++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<l;j++)
        {
            cout<<mult[i][j];
        }
    }
    return 0;

}
