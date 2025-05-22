#include <stdio.h>

int main() 
{
    int rows, cols,i,j,max;

    printf("Enter rows size: ");
    scanf("%d", &rows);
    printf("Enter cols size: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    
    printf("Enter array elements:\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            printf("a [%d][%d]=: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    max = arr[0][0];

    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            if (arr[i][j] > max) 
            {
                max = arr[i][j];
            }
        }
    }
    printf("\n The largest element in the array is: %d",max);

    return 0;
}
