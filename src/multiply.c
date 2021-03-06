#include <stdio.h>
#include "mathlib.h"

int main() {
    int o = 5;
    int f = 2;
    int r = 0;

    r = multiply_by(o, f);

    printf("%d times %d is %d\n", o, f, r);
}
