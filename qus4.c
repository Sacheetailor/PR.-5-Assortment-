#include<stdio.h>
int main()
{
    int row,col,i,j,row_n,col_n,row_sum=0,col_sum=0;
    printf("Enter the number of row: ");
    scanf("%d", &row);
    printf("Enter the number of col: ");
    scanf("%d", &col);


    int arr[row][col];

    printf("Enter array elements:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("a [%d][%d]=: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n Enter the row number: ");
    scanf("%d", &row_n);

    printf("\n Element of row %d is: ", row_n);
    for (j = 0; j < col; j++)
        {
        printf("%d ", arr[row_n][j]);
        row_sum += arr[row_n][j];
        }
    
    printf("\n enter the col number: ");
    scanf("%d", &col_n);

    printf("\n element of col %d is: ", col_n);
    for (i = 0; i < row; i++)
    {
        printf("%d ", arr[i][col_n]);
        col_sum += arr[i][col_n];
    }
    printf("\nSum of col %d is: %d\n", col_n, col_sum);

    return 0;
}
    