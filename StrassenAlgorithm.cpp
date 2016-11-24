#include<bits/stdc++.h>
using namespace std;
int matrix[2][2];
int matrix1[2][2];
int result[2][2];
int main()
{
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>matrix[i][j];
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>matrix1[i][j];
        }
    }

    int p1,p2,p3,p4,p5,p6,p7;
    p1=(matrix[0][0])*(matrix1[0][1]-matrix1[1][1]);
    p2=(matrix1[1][1])*(matrix[0][0]+matrix[0][1]);
    p3=(matrix1[0][0])*(matrix[1][0]+matrix[1][1]);
    p4=(matrix[1][1])*(matrix1[1][0]-matrix1[0][0]);
    p5=(matrix[0][0]+matrix[1][1])*(matrix1[0][0]+matrix1[1][1]);
    p6=(matrix[0][1]-matrix[1][1])*(matrix1[1][0]+matrix1[1][1]);
    p7=(matrix[0][0]-matrix[1][0])*(matrix1[0][0]+matrix1[0][1]);

    result[0][0] = p6+p5+p4-p2;
    result[0][1] = p1+p2;//
    result[1][0] = p3+p4;
    result[1][1] = p1-p3+p5-p7;//

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
