#include <stdio.h>

int main()
{
    int matrix[3][3];
    int max;
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("Element %d %d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The 3x3 matrix is:\n");
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    max = matrix[0][0];
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }

    printf("The largest number in the 3x3 matrix is: %d\n", max);

    return 0;
}
