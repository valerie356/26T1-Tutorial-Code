// Space Exploration
// part1_galaxy.c
//
// This program was written by YOUR-NAME-HERE (zXXXXXXX)
// on INSERT-DATE-HERE
//
// This program is a simple game that allows the user to build a galaxy. 
// The user can place stars, planets, and nebulae in the galaxy.

#include <stdio.h>

#define SIZE 5
#define NEBULA_POINTS -10

#define END_PROGRAM 'q'
#define ADD_PLANETS 'p'

enum entity {
    STAR,
    PLANET,
    NEBULA,
    SPACESHIP,
    EMPTY,
};
  
struct celestial_body {
    enum entity entity;
    int points;
};

void print_map(struct celestial_body galaxy[SIZE][SIZE]);

int main(void) {
    // TODO: Initialize the galaxy
    // Pass in: galaxy
    // Return: 
    struct celestial_body galaxy[SIZE][SIZE];
    function(galaxy);


   // TODO: Place the planets and nebulae in the galaxy
   printf("Enter planets and nebulae:\n");
    int points;
    char type;
    scanf(" %c", &type);
    int row;
    int col;
    while (type != END_PROGRAM) {
        //      command
        scanf(" %c %d %d", &command, &row, &col);

        if (command == ADD_PLANETS) {
            int points;
            scanf("%d", &points);
            galaxy[row][col].entity = PLANET;
            galaxy[row][col].points = points;
        } else if (command == 'n') {
            galaxy[row][col].entity = NEBULA;
        }
        scanf(" %c", &type);
    }

   // TODO: Place the player (player is just spaceship) in the galaxy
   printf("Enter the starting position of the player: ");
    int player_row = 0;
    int player_col = 0;
    scanf(" %d %d", &player_row, &player_col);

    // player_row OR player_col is invalid
    while (galaxy[player_row][player_row].entity != EMPTY || player_row < 0 
    || player_row >= SIZE || player_col < 0 || player_col >= SIZE) {
        printf("Invalid starting position!.\n");
        scanf(" %d %d", &player_row, &player_col);
    }
    galaxy[player_row][player_col].entity = SPACESHIP;
    galaxy[player_row][player_col].entity = 0;

   // TODO: Place the stars in the galaxy
   printf("Enter the position and points of the star(s):\n");

    int star_row;
    int star_col;
    int star_points;
    while (scanf("%d %d %d", &star_row, &star_col, &star_points) == 3) {
        galaxy[star_row][star_col].entity = STAR;
        galaxy[star_row][star_col].points = star_points;
    }

   // TODO: Print the map
    print_map(galaxy);



    return 0;
}

// Function prints the map of the galaxy
// 
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void print_map(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("\n---------------------\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("|");
            if (galaxy[i][j].entity == SPACESHIP) {
                printf(" X ");
            } else if (galaxy[i][j].entity == EMPTY) {
                printf("   ");
            } else if (galaxy[i][j].entity == STAR) {
                printf(" * ");
            } else if (galaxy[i][j].entity == PLANET) {
                printf(" o ");
            } else if (galaxy[i][j].entity == NEBULA) {
                printf(" # ");
            }
        }
        printf("|\n");
        printf("---------------------\n");
    }
}


void function(struct celestial_body galaxy[SIZE][SIZE]) {
     for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            galaxy[row][col].entity = EMPTY;
            galaxy[row][col].points = 0;
        }
    }
}