#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>


void test_sqrt_calculation() {
    assert(sqrt(4) == 2.0);
    assert(sqrt(9) == 3.0);
    assert(sqrt(16) == 4.0);
}

int main(int argc, char *argv[]) {

    test_sqrt_calculation();

    if (argc < 2) {
        printf("Usage: %s <numbers>\n", argv[0]);
        return 1;
    }

    char *input_string = argv[1];
    char *token = strtok(input_string, " ");

    while (token != NULL) {
        int num = atoi(token);
        double sqrt_num = sqrt(num);
        printf("%g\n", sqrt_num);

        token = strtok(NULL, " ");
    }

    return 0;
}