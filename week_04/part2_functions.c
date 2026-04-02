// functions.c
//
// Written by Sofia De Bellis (z5418801)
// on March 2024
//
// This program is a simple demonstration of functions

#include <stdio.h>

int add_numbers(int num1, int num2);

// TODO: Function prototype
int main(void) {
    int result;
    int num1 = 5;
    int num2 = 3;

    result = add_number(num1, num2);
    
    printf("Result: %d\n", result);
    return 0;
}
// =====================================================================




// This function will add two numbers toeger and return it
int add_numbers(int num1, int num2) {
    //             5     3
    int result = num1 + num2;
    return result;

}
