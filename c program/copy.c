#include <stdio.h>

int main() {
    int amount, count;
    
    // Prompt user to enter the amount
    printf("Enter the amount: ");
    scanf("%d", &amount);
    
    // Prompt user to enter the count of notes
    printf("Enter the count of notes: ");
    scanf("%d", &count);
    
    // Calculate total amount
    int totalAmount = amount * count;
    
    // Display total amount
    printf("Total Amount: %d\n", totalAmount);
    
    return 0;
}

