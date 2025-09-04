/*Single File Programming Question
Problem Statement



Maha, a software engineer, is developing a cart system where the user can add items with their prices to a stack. After adding all items, the program calculates and prints the sum of the last two items added to the cart. 



However, there is an issue when the cart has fewer than two items. Your task is to fix the code so that it handles such cases and correctly calculates the sum of the last two prices if there are at least two items in the cart.

Input format :
The first line of input consists of an integer n, representing the number of items to be added to the cart.

The second line contains n space-separated integers, each representing the price of an item.

Output format :
If the cart contains at least two items, the program should output the sum of the last two prices.

If there are fewer than two items, the program should not output anything.



﻿Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 50

Each price is a positive integer.

Sample test cases :
Input 1 :
3
85 90 95
Output 1 :
185
Note :
*/
#include <stdio.h>
#include <stdlib.h>

// You are using GCC

// Global array to represent the stack of cart items, with a max size of 50.
int cartStack[50];
// Variable to track the top of the stack. -1 indicates the stack is empty.
int cartTop = -1;

// Function to add a price to the top of the stack.
void addItem(int price) {
    // Check for stack overflow before adding the item.
    if (cartTop >= 49) {
        printf("Error: Cart is full!\n");
        return;
    }
    // Increment the top of the stack and add the new price.
    cartStack[++cartTop] = price;
}

// Function to sum the last two items added to the stack.
void sumLastTwo() {
    // Check if there are at least two items in the stack.
    if (cartTop < 1) {
        printf("Not enough items in the cart to sum the last two.\n");
        return;
    }
    // Calculate the sum of the last two items.
    int sum = cartStack[cartTop] + cartStack[cartTop - 1];
    printf("Sum of the last two items: %d\n", sum);
}

int main() {
    int n;
    int price;

    // Prompt the user to enter the number of items.
    printf("Enter the number of items to add to your cart: ");
    scanf("%d", &n);

    // Loop to read prices and add them to the cart stack.
    for (int i = 0; i < n; i++) {
        printf("Enter price for item #%d: ", i + 1);
        scanf("%d", &price);
        addItem(price);
    }

    // Call the function to sum the last two items in the cart.
    sumLastTwo();
    
    return 0;
}
