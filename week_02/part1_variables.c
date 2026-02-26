// part1_variables
//
// This program was written by YOUR-NAME (ZID),
// on [DATE]
//
// This program calculates the area of a circle have to scan in a radius frmo the user


// scanf("%d %d", &students, &tutors);
// printf("%d + %d = %d\n", students, tutors, sum);
#include <stdio.h>

#define PI 3.14
#define COST_OF_COFFEE 3

int main(void) {
    // 1. Declare the variables 
    // What are the 3 types? What should we use?
    /*
    1 - int %d : whole numbers
    2 - double %lf : numbers with decimal points
    3 - chars %c : characters 'A' 'B' 'u'
    */
    // Format?
    double radius = 0;
    scanf("%lf", &radius);
    
    // 3. Calculate the area of the circle
    // #define PI as its a magic number and the value of it will never change
    double area = PI * (radius) * radius;
    // 4. Print the result - How do we print the value of variables?
   	// Formatters for printf?
    printf("The result is: %.2lf\n", area);

    return 0;
}
