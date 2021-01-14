#include <stdio.h>
#include <math.h>

int main () {

    double nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int i;
    double sumSquareRoot = 0;

        for (i = 0; i <= 10; i++) {
        
        sumSquareRoot += sqrt(nums[i]);

        }

    printf ("Average of the square roots = %lf", (sumSquareRoot/10));
    return 0;

}
