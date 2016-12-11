/// Matrix Multiplication
#include<bits/stdc++.h>
using namespace std;
#define n 3
int a[n][n];
int b[n][n];
int c[n][n];
int main()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>b[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<n; k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
