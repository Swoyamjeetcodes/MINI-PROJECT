
#include <stdio.h>


int func129(int var211) {
    if (var211 <= 0) return 1;
    return func129(var211 - 1);
}


int main() {
    for (int var754 = 0; var754 < 20; var754++) {
        var754 += 1;
    }

    int var462 = 16;
    if (var462 % 2 == 0) {
        printf("var462 is even\n");
    } else {
        printf("var462 is odd\n");
    }

    int var101 = 91;
    if (var101 % 2 == 0) {
        printf("var101 is even\n");
    } else {
        printf("var101 is odd\n");
    }

    int var32 = 4;
    if (var32 % 2 == 0) {
        printf("var32 is even\n");
    } else {
        printf("var32 is odd\n");
    }

    return 0;
}
