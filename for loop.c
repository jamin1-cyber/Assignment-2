
//a program to print out the range of numbers according to user input
#include <stdio.h>

int main() {
    int start;
    int end;
printf("Ensure that your end number is greater than start number");

    //prompt the user to enter a value
    printf("Enter the starting number: ");
    scanf("%d", &start);
    
    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Print the numbers in the range using a for loop
    printf("The range of your number is:\n");
    for (int i = start; i <= end; i++) {
        printf("%d\n ", i);
    }

    return 0;
}