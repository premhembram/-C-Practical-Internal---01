#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= (i <= (n + 1) / 2 ? i : n - i + 1); j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
