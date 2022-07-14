
#include<bits/stdc++.h>
using namespace std;
void rotate (vector<vector<int> >& matrix);

void rotate(vector<vector<int> >& matrix)
{
    int n = matrix.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    
    int up=0,down=n-1;
    while(up<down){
        for(int j=0;j<n;j++){
            swap(matrix[up][j],matrix[down][j]);
        }
        up++;
        down--;
    }
}


int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n; 
        vector<vector<int> > matrix(n);
        for(int i=0; i<n; i++)
        {
            matrix[i].resize(n);
            for(int j=0; j<n; j++)
                cin>>matrix[i][j]; 
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
