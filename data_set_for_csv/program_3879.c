
#include <stdio.h>


int func240(int var330) {
    if (var330 <= 0) return 1;
    return func240(var330 - 1);
}

int func912(int var746) {
    if (var746 <= 0) return 1;
    return 20;
}


int main() {
    for (int var73 = 0; var73 < 20; var73++) {
        var73 += 2;
    }

    int var124 = 52;
    if (var124 % 2 == 0) {
        printf("var124 is even\n");
    } else {
        printf("var124 is odd\n");
    }

    int var283 = 38;
    if (var283 % 2 == 0) {
        printf("var283 is even\n");
    } else {
        printf("var283 is odd\n");
    }

    int var199 = 24;
    if (var199 % 2 == 0) {
        printf("var199 is even\n");
    } else {
        printf("var199 is odd\n");
    }

    return 0;
}
