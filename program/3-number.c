#include <stdio.h>
int GCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int LCM(int a, int b)
{
    return (a * b) / GCD(a, b);
}

int main()
{
    int num1, num2;
    printf("numbers 1:\n");
    scanf("%d", &num1);
    printf("number 2:\n");
    scanf("%d", &num2);
    int lcm = LCM(num1, num2);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
