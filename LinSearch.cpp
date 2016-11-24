/**
                        Hasan Mahmud Rhidoy
                        37-CSE,UAP
**/
/**    ************Linear Search************            **/

#include<bits/stdc++.h>
using namespace std;
int arr[10000];
int main()
{
///............................................Variable Declare........................................
    int n;
     int key,c=0;
///...........................................Input.............................................................
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>key;
///...............................................Searching Keyword...............................
    for(int i=0; i<n; i++)
    {
        if(arr[i] == key )
            cout<<i+1<<"th index"<<endl;
        else
            c++;
    }
    if(c==n)
        cout<<"Not Found"<<endl;
///..............................................................End....................................
    return 0;
}
