#include <stdio.h>
#include <math.h>

int main(void) {
    double a = 1.0 - 0.9;
    double b = 0.1;
    double epsilon = 1e-9;

    printf("(1.0-0.9)==0.1�� %d�Դϴ�.\n", fabs(a - b) < epsilon);

    return 0;
}
