// part1_arrays.c, odd_only
//
// Written by YOUR-NAME (YOUR-ZID)
// on TODAYS-DATE 
//
// This program adds 1 to any even element in an array and after prints 
// all elements in the array

#include <stdio.h>

#define SIZE 5

int main(void) {
    // Print the entire array from beginning to end
    // int array[SIZE]
    // int array[5] = {0}
    // int array = {1, 2, 3, 4, 5}
    // int array[5] = {1, 2}

    //                  0    1    2    3    4
    int my_array[5] = {100, 200, 300, 400, 500};
    int i = 0;
    while (i < 5) {
        if (my_array[i] % 2 == 0) {
            my_array[i] = my_array[i] + 1;
        }
        i++;
    }

    for (int j = 0; j < 5; j++) {
        printf("Numnber is %d\n", my_array[j]);
    }
    return 0;
}
