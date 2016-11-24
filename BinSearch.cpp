/**
                        Hasan Mahmud Rhidoy
                        37-CSE,UAP
**/
/**    ************Binary Search************          **/
#include<bits/stdc++.h>
using namespace std;
int a[10000];

int main()
{
///.................................Basic Declaration..................................................
    int n,key,start,End,mid;
///...................................Input....................................................................
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    cin>>key;
///......................................Binary Search.....................................................
    start=0;
    End = n-1;
    mid = (int) ((start+End)/2);

    while(start<=End)
    {
        printf("Start = %d Mid = %d End = %d Key = %d\n",start,mid,End,key);
        if(a[mid]==key)
        {
            cout<<"The Number Is Found in "<<mid+1<<"th Position"<<endl;
            break;
        }
/// Middle number greater then key
        else if(a[mid]>key)
            End = mid-1;
/// If middle number less then key
        else if(a[mid]<key)
            start = mid+1;
///.......................Again Divide.........................
        mid = (int) ((start+End)/2);
    }
/// If not found key then follow this step
    if(start>End)
    {
        printf("\n\nStart is greater then End\n");
        printf("Start = %d Mid = %d End = %d Key = %d\n",start,mid,End,key);
        printf("Sorry Not Found\n");
    }
///..........................................End...................................................
    return 0;
}
