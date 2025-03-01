#include <stdio.h>

int main()
{
    int n;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Swap odd and even elements
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] % 2 == 1 && arr[i + 1] % 2 == 0)
        {
            // Swap arr[i] (odd) with arr[i+1] (even)
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    // Display the modified array
    printf("The array after swapping odd and even elements is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
