
#include <stdio.h>


int func73(int var353) {
    if (var353 <= 0) return 1;
    return func73(var353 - 1);
}


int main() {
    for (int var500 = 0; var500 < 9; var500++) {
        var500 += 2;
    }

    int var576 = 51;
    if (var576 % 2 == 0) {
        printf("var576 is even\n");
    } else {
        printf("var576 is odd\n");
    }

    return 0;
}
