/// Implement Merge Sort Using Divide , Conquer and Combine algorithm
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int arr[MAX];
int temp[MAX];

void Merging(int start,int Mid,int End)
{
    int left,right,i;
    left = start;
    right = Mid+1;

    for(i=left; left<=Mid && right<=End; i++)
    {
        if(arr[left]<arr[right])
            temp[i] = arr[left++];
        else
            temp[i] = arr[right++];
    }

    while(left<=Mid)
        temp[i++] = arr[left++];

    while(right<=End)
        temp[i++] = arr[right++];

    for(int k=start; k<=End; k++)
        arr[k] = temp[k];
}

void Sorting(int start, int End)
{
    if(start>=End)
        return;
    int Mid = (int) (start+End)/2;

    Sorting(start,Mid);
    Sorting(Mid+1,End);

    Merging(start,Mid,End);
}
int main()
{
    int i, n;

    printf("Enter Number of elements:\n");
    scanf("%d", &n);
    printf("Enter %d Elements:\n",n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    Sorting(0, n-1);

    printf("\nAfter Sorting The Array:\n");
    for(i = 0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}




