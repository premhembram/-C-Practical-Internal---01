#include <stdio.h>
int fun(int n)
{
    if (n / 10 == 0)
    {
        return (n % 10);
    }
    else
    {
        return fun(n % 10 + fun(n / 10));
    }
}
int main()
{
    printf("%d\n", fun(9874));
}