//a program to print out the range of numbers using while loop
#include <stdio.h>

int main() {
    int start;
    int end;
 printf("Ensure that your end number is greater than start number");   

    //prompting the user to enter a number
    printf("Enter the starting number: ");
    scanf("%d", &start);
    
    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Print the numbers in the range using a while loop
    int i = start;
    printf("This is your range :\n");
    while (i <= end) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}