#include <stdio.h>

int main() {

    double x, y;
    printf("x: ");
    scanf("%lf", &x);

    if (x > -10) {

        if (x <= -5) {

            y = x * x * x -6;
            printf("y = %.2f\n", y);

        } else {

            if (x > 5) {

                if (x <= 15) {

                    y = x * x * x - 6;
                    printf("y = %.2f\n", y);

                } else {

                    if (x >= 25) {
                        y = 2 * x * x * x - 3 * x + 2;
                        printf("y = %.2f\n", y);

                    } else {

                        printf("Wrong x.\n");
                    }
                }
            } else {

                printf("Wrong x.\n");
            }
        }
    } else {

        printf("Wrong x.\n");
    }
    
    return 0;
}