#include <stdio.h>
#include <math.h>
int countDigits(int num)
{
    int count = 0;
    while (num != 0)
    {
        count++;
        num /= 10;
    }
    return count;
}
int isArmstrong(int num)
{
    int originalNum = num, sum = 0;
    int digits = countDigits(num);

    while (num != 0)
    {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return (sum == originalNum);
}

int main()
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Please enter a non-negative integer.\n");
    }
    else
    {
        if (isArmstrong(num))
        {
            printf("%d is an Armstrong number.\n", num);
        }
        else
        {
            printf("%d is not an Armstrong number.\n", num);
        }
    }

    return 0;
}
