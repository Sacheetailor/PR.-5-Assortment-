#include <stdio.h>

int main() 
{
    int n,i;

    printf("\n Enter array size:");
    scanf("%d",&n);

    int arr[n];

    

    for (i = 0; i < n; i++) 
    {
        printf("\n Enter array element %d:",i);
        scanf("%d",&arr[i]);
    }
    printf(" Negative elements from an array:");

    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            printf(" %d ",arr[i]);
        }
    
    }

        return 0;
}
