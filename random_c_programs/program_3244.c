
#include <stdio.h>


int func48(int var228) {
    if (var228 <= 0) return 1;
    return func48(var228 - 1);
}


int main() {
    for (int var531 = 0; var531 < 11; var531++) {
        var531 += 4;
    }

    int var815 = 100;
    if (var815 % 2 == 0) {
        printf("var815 is even\n");
    } else {
        printf("var815 is odd\n");
    }

    int var683 = 92;
    if (var683 % 2 == 0) {
        printf("var683 is even\n");
    } else {
        printf("var683 is odd\n");
    }

    int var51 = 72;
    if (var51 % 2 == 0) {
        printf("var51 is even\n");
    } else {
        printf("var51 is odd\n");
    }

    return 0;
}
