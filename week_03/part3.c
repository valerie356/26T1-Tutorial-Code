#include <stdio.h>

int main(void) {
    // B: Enter characters until the user presses 'q'. Then, display the count of characters entered.
    char input = ' ';
    
    // 
    scanf(" %c", &input);
    while (input != 'q') {
        printf("%c", input);
        scanf(" %c", &input);
    }


    // // C: Scan for numbers until end of input and display all even numbers entered.
    // int num = 0;
    // while (scanf("%d", &num) == 1) {
    //     if (num % 2 == 0) {
    //         printf("%d\n", num);
    //     }
    // }
    // printf("\n");
    return 0;
}