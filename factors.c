#include "factor.h"
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
