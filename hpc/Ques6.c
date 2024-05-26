
//Abstract : Calculate pi value

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ITERATIONS 1000000  // Adjust for desired accuracy

int main() {
    int inside_circle = 0;
    double x, y, distance_squared;

    srand(time(NULL));  // Seed the random number generator

    for (int i = 0; i < MAX_ITERATIONS; i++) {
        // Generate random coordinates within the unit square (0, 1)
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;

        // Calculate distance from the origin squared
        distance_squared = x * x + y * y;

        // Check if the point lies inside the circle (radius 1)
        if (distance_squared <= 1.0) {
            inside_circle++;
        }
    }

    // Estimate PI using the ratio of points inside the circle to total points
    double pi_estimate = 4.0 * ((double)inside_circle / MAX_ITERATIONS);

    printf("Estimated value of PI after %d iterations: %.6lf\n", MAX_ITERATIONS, pi_estimate);

    return 0;
}

