#include <stdio.h>
int isPalindrome(int num)
{
    int originalNum = num, reversedNum = 0, remainder;

    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return (originalNum == reversedNum);
}

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Negative numbers cannot be palindromes.\n");
    }
    else
    {
        if (isPalindrome(num))
        {
            printf("%d is a palindrome.\n", num);
        }
        else
        {
            printf("%d is not a palindrome.\n", num);
        }
    }

    return 0;
}
