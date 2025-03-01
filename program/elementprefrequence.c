#include <stdio.h>

int main() {
    int n, element, count = 0;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &element);

    // Search for the element and count its frequency
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            count++;
        }
    }

    // Output the result
    if (count > 0) {
        printf("The element %d is present and its frequency is: %d\n", element, count);
    } else {
        printf("The element %d is not present in the array.\n", element);
    }

    return 0;
}
