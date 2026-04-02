#include <stdio.h>

int main(int argc, char *argv[]) {
    int i = 0;
    while (i < argc) {
        printf("%d: %s\n", i, argv[i]);
        i++;
    }
    printf("Argc is %d\n", argc);
    printf("\n");
    return 0;
}
