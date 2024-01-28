#include <stdio.h>
#include <stdlib.h>

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

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <file>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    int number;
    while (fscanf(file, "%d", &number) == 1) {
        factorize(number);
    }

    fclose(file);
    return 0;
}
