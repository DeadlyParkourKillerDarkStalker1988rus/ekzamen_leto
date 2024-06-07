#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <numbers>\n", argv[0]);
        return 1;
    }

    char *input_string = argv[1];
    char *token = strtok(input_string, " ");

    while (token != NULL) {
        int num = atoi(token);
        double sqrt_num = sqrt(num);
        printf("%.2f\n", sqrt_num);

        token = strtok(NULL, " ");
    }

    return 0;
}