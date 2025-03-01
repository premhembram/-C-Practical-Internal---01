#include <stdio.h>

int main()
{
  int a, b;

  // Input two numbers
  printf("Enter the first number : ");
  scanf("%d", &a);
  printf("Enter the second number : ");
  scanf("%d", &b);

  // Swapping without a third variable
  a = a + b; // Step 1: a becomes the sum of a and b
  b = a - b; // Step 2: b becomes the original value of a
  a = a - b; // Step 3: a becomes the original value of b
  printf(" swapping:\n");
  printf("a = %d\n", a);
  printf("b = %d\n", b);

  return 0;
}
