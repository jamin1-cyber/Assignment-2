//a program to print the range of numbers using do...while loop

#include <stdio.h>

int main() {
    int start;
    int end;

printf("Ensure that your end number is greater than the start");
    // prompting the user to enter a first and second number
    printf("Enter the starting number: ");
    scanf("%d", &start);
    
    printf("Enter the ending number: ");
    scanf("%d", &end);
    
    // Print the numbers in the range using a do-while loop
    printf("The numbers in the range are:\n");
    int i = start;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= end);

    return 0;
}