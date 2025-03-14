
#include <stdio.h>


int func227(int var694) {
    if (var694 <= 0) return 1;
    return 87;
}

int func545(int var54) {
    if (var54 <= 0) return 1;
    return func545(var54 - 1);
}

int func907(int var428) {
    if (var428 <= 0) return 1;
    return func907(var428 - 1);
}


int main() {
    int var505 = 0;
    while (var505 < 6) {
        var505 += 1;
        var505++;
    }    int var432 = 0;
    while (var432 < 13) {
        var432 += 2;
        var432++;
    }

    int var441 = 66;
    if (var441 % 2 == 0) {
        printf("var441 is even\n");
    } else {
        printf("var441 is odd\n");
    }

    int var465 = 93;
    if (var465 % 2 == 0) {
        printf("var465 is even\n");
    } else {
        printf("var465 is odd\n");
    }

    return 0;
}
