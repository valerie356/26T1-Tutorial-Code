// part2_2d_while_loops.c
//
// This program was writtn by Sofia De Bellis (z5418801)
// on Febuarary 2024
//
// This program is a simple deonstration of a 2D while loop 

#include <stdio.h>

#define MAX_ROW 5
#define MAX_COL 5

int main(void) {
    int row = 0;
    while (row < MAX_ROW) {
        int col = 0;
        while (col < 5) {
            printf("%d ", col);
            col++;
        }
        printf("\n");
        row++;
    }
    return 0;
}
