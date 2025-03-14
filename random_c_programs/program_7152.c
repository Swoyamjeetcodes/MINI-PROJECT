
#include <stdio.h>


int func559(int var695) {
    if (var695 <= 0) return 1;
    return func559(var695 - 1);
}

int func481(int var605) {
    if (var605 <= 0) return 1;
    return 45;
}

int func263(int var559) {
    if (var559 <= 0) return 1;
    return func263(var559 - 1);
}

int func420(int var778) {
    if (var778 <= 0) return 1;
    return 10;
}


int main() {
    for (int var768 = 0; var768 < 9; var768++) {
        var768 += 1;
    }    for (int var783 = 0; var783 < 15; var783++) {
        var783 += 1;
    }

    int var848 = 13;
    if (var848 % 2 == 0) {
        printf("var848 is even\n");
    } else {
        printf("var848 is odd\n");
    }

    return 0;
}
