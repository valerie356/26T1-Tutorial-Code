// part3_simple_string.c
//
// This program was written by Sofia De Bellis (z5418801)
// on March 2024
//
// This program demonstrates how to work with strings in C.

#include <stdio.h>


#define MAX_SIZE 1024

int main(void) {
    // Declare and initialise a string
    char my_string[] = "Hello World";
    // Traverse the string and print each character
    int i = 0;
    while (my_string[i] != '\0') {
        printf("%c", my_string[i]);
    }
    
    // To scan a string
    fgets(my_stirng, SIZE, stdin);

    printf("%s", my_string);
    // Another way to traverse the string and print each character 

    // How to print a string in its entirety

    // Declare a string

    // Read a string from the user, note we DO NOT use scanf for strings


    // Print the string using fputs


}