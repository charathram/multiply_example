#include <stdio.h>

/*
 * A simple function to multiply one integer
 * by another and return an integer result.
 */
int multiply_by(int operand, int factor) {
    return operand * factor;
}

int main() {
    int o = 5;
    int f = 2;
    int r = 0;

    r = multiply_by(o, f);

    printf("%d times %d is %d\n", o, f, r);
}
