// part5_roller_coaster
//
// This program was written by YOUR-NAME, ZID
// on [DATE]
//
// This program:
// 1. Scans in the users height.
//
// 2. If the height is 0 or less, 
//    it should print an error message
//
// 3. If the height is below the minimum height, 
//    it should print a message telling the user they are not tall enough to ride
// 
// 4. If the height is above the minimum but below the ride alone threshold,
//    it should print a message telling the user they can ride with an adult
//
// 5. If the height is or is above the ride alone threshold, 
//    it should print a message telling the user they can ride.

// Minimum Height = 100
// Ride alone height = 160

// scanf("%d %d", &students, &tutors);
// printf("%d + %d = %d\n", students, tutors, sum);
#include <stdio.h>

#define MIN_HEIGHT 100
#define RIDE_ALONE_HEIGHT 160

int main(void) {
    double height = 0;
    scanf("%lf", &height);

    if (height <= 0) {
        printf("Error\n");
    } else if (height < MIN_HEIGHT) {
        printf("Not tall enough to ride\n");

        // height must be >= MIN_HEIGHT
    } else if (height < RIDE_ALONE_HEIGHT) {
        printf("Can ride with an adult\n");
    } else {
        printf("Can ride alone\n");
    }


    return 0;
}
