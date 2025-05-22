#include<stdio.h>
int main()
{
    int number,i,j;
    printf("Enter a rows and columns: ");
    scanf("%d", &number);

    int arr[number][number], transpose[number][number];
    printf("Enter array elements:\n");
    
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            printf("a [%d][%d]=: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0;i<number;i++)
    {
        for(j=0;j<number;j++)
        {
            transpose[j][i]=arr[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
         for(i=0;i<number;i++)
    {
        for(j=0;j<number;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}