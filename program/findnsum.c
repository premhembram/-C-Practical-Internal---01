#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Ensure n is positive
    if (n < 0) {
        printf("Please enter a positive number.\n");
    } else {
        // Calculate the sum of first n numbers
        for (int i = 1; i <= n; i++) {
            sum += i;
        }

        // Display the result
        printf("The sum of the first %d numbers is: %d\n", n, sum);
    }

    return 0;
}
//Start
 // |
//  V
//Input n
//  |
//  V
//Is n < 0?
 // |   \
//Yes    No
 // |      |
//Print "Invalid input"  Initialize sum = 0
 //         |                   |
 //         V                   V
 //       End         Add i (1 to n) to sum
 //                         |
 //                         V
 //                 Print sum
 //                 
//                        |
//                        V
//                        End
