
#include <stdio.h>


int func135(int var925) {
    if (var925 <= 0) return 1;
    return 78;
}

int func23(int var254) {
    if (var254 <= 0) return 1;
    return func23(var254 - 1);
}

int func781(int var663) {
    if (var663 <= 0) return 1;
    return func781(var663 - 1);
}


int main() {
    int var623 = 0;
    while (var623 < 16) {
        var623 += 5;
        var623++;
    }

    int var670 = 10;
    if (var670 % 2 == 0) {
        printf("var670 is even\n");
    } else {
        printf("var670 is odd\n");
    }

    int var33 = 70;
    if (var33 % 2 == 0) {
        printf("var33 is even\n");
    } else {
        printf("var33 is odd\n");
    }

    int var207 = 72;
    if (var207 % 2 == 0) {
        printf("var207 is even\n");
    } else {
        printf("var207 is odd\n");
    }

    int var196 = 35;
    if (var196 % 2 == 0) {
        printf("var196 is even\n");
    } else {
        printf("var196 is odd\n");
    }

    int var133 = 11;
    if (var133 % 2 == 0) {
        printf("var133 is even\n");
    } else {
        printf("var133 is odd\n");
    }

    return 0;
}
