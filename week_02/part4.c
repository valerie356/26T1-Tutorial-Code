#include <stdio.h>

int main(void) {
    /*
    Case 1: x < 0
    Case 2: x == 0
    Case 3: x > 0
    */
    if (x < 0) {
        printf("X is negative\n");
    } else if (x == 0) {
        printf("X is 0\n");
    } else {
        printf("X is postive\n");
    }

    return 0;
}