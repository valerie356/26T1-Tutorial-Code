#include <stdio.h>
// (7 / 2)
// (3.0 / 2) + 1
// 'a' + 5
// 'F' - 'A' + 'a'

// modify the printf formatter to %c to %d
// %c and %d since they are all numbers number the hood
// they can kinda be used interchangeably and what you print out 
// entirely depends on the formatter in the printf statement

// ASCII
int main(void) {
   // (7 / 2) 
   // (3.0 / 2) + 1
   // 'a' + 5
   // 'F' - 'A' + 'a'
   // printf("Letter is %d\n", 'a' + 5);
   printf("New Letter is %c\n", 'F' - 'A' + 'a');

   return 0;
}
