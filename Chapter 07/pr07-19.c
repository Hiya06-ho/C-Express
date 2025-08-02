#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num_points;
    int count_inside = 0;
    double x, y;

    srand(time(NULL));

    printf("반복 횟수: ");
    scanf("%d", &num_points);

    for (int i = 0; i < num_points; i++) {
        x = (double)rand() / RAND_MAX * 2.0 - 1.0;
        y = (double)rand() / RAND_MAX * 2.0 - 1.0;

        if (x * x + y * y <= 1.0) {
            count_inside++;
        }
    }

    double pi = 4.0 * count_inside / num_points;

    printf("파이 = %.6f\n", pi);

    return 0;
}