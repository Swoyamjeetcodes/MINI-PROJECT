
#include <stdio.h>


int func102(int var438) {
    if (var438 <= 0) return 1;
    return func102(var438 - 1);
}

int func136(int var441) {
    if (var441 <= 0) return 1;
    return func136(var441 - 1);
}


int main() {
    for (int var112 = 0; var112 < 9; var112++) {
        var112 += 1;
    }

    int var694 = 49;
    if (var694 % 2 == 0) {
        printf("var694 is even\n");
    } else {
        printf("var694 is odd\n");
    }

    int var830 = 77;
    if (var830 % 2 == 0) {
        printf("var830 is even\n");
    } else {
        printf("var830 is odd\n");
    }

    return 0;
}
