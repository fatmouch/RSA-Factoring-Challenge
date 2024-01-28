include "factor.h"
void factorize(int number) {
    int factor1 = 2;
    int factor2 = number / factor1;

    while (factor1 <= factor2) {
        if (factor1 * factor2 == number) {
            printf("%d=%d*%d\n", number, factor1, factor2);
            return;
        }
        factor1++;
        factor2 = number / factor1;
    }

    // If no factorization is found, print the original number
    printf("%d=%d*%d\n", number, number, 1);
}
