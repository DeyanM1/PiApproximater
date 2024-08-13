#include <stdio.h>
#include <math.h>
#include <time.h>

int main() {
    // Calculate Pi using the Leibniz formula
    double pi = 0.0;
    double divisor = 1.0;
    int iterations = 5000000;
    clock_t t1 = clock();

    for (int i = 1; i <= iterations; i++) {
        pi = pi + 4.0 / divisor - 4.0 / (divisor + 2.0);
        printf("Pi approximation after %d iterations (%.3f%%): %f\n", i, (i / (double)iterations) * 100, pi);
        divisor += 4.0;
    }
    clock_t t2 = clock();
    
    printf("Final Pi approximation: %f / %f  |  Difference: %f\n", pi, M_PI, fabs(M_PI - pi));
    printf("Time taken: %fs\n", (double)(t2 - t1) / CLOCKS_PER_SEC);

    return 0;
}
