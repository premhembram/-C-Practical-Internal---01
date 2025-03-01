#include <stdio.h>
int main()
{
    int n, i, num;
    int sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        sum = sum + num;
    }

    printf("The sum of the numbers is: %d\n", sum);

    return 0;
}
