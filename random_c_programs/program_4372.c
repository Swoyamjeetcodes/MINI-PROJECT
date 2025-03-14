
#include <stdio.h>


int func723(int var900) {
    if (var900 <= 0) return 1;
    return func723(var900 - 1);
}

int func304(int var86) {
    if (var86 <= 0) return 1;
    return func304(var86 - 1);
}

int func308(int var634) {
    if (var634 <= 0) return 1;
    return 21;
}


int main() {
    int var910 = 0;
    while (var910 < 15) {
        var910 += 1;
        var910++;
    }    int var17 = 0;
    while (var17 < 11) {
        var17 += 2;
        var17++;
    }

    int var880 = 53;
    if (var880 % 2 == 0) {
        printf("var880 is even\n");
    } else {
        printf("var880 is odd\n");
    }

    int var575 = 41;
    if (var575 % 2 == 0) {
        printf("var575 is even\n");
    } else {
        printf("var575 is odd\n");
    }

    int var516 = 79;
    if (var516 % 2 == 0) {
        printf("var516 is even\n");
    } else {
        printf("var516 is odd\n");
    }

    return 0;
}
