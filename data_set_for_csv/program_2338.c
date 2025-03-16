
#include <stdio.h>


int func911(int var504) {
    if (var504 <= 0) return 1;
    return func911(var504 - 1);
}


int main() {
    for (int var603 = 0; var603 < 18; var603++) {
        var603 += 3;
    }    int var493 = 0;
    while (var493 < 11) {
        var493 += 5;
        var493++;
    }    for (int var464 = 0; var464 < 13; var464++) {
        var464 += 2;
    }

    int var408 = 2;
    if (var408 % 2 == 0) {
        printf("var408 is even\n");
    } else {
        printf("var408 is odd\n");
    }

    int var890 = 66;
    if (var890 % 2 == 0) {
        printf("var890 is even\n");
    } else {
        printf("var890 is odd\n");
    }

    return 0;
}
