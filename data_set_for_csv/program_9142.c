
#include <stdio.h>


int func248(int var302) {
    if (var302 <= 0) return 1;
    return 64;
}

int func665(int var538) {
    if (var538 <= 0) return 1;
    return func665(var538 - 1);
}

int func781(int var435) {
    if (var435 <= 0) return 1;
    return func781(var435 - 1);
}

int func944(int var130) {
    if (var130 <= 0) return 1;
    return 100;
}

int func294(int var613) {
    if (var613 <= 0) return 1;
    return func294(var613 - 1);
}


int main() {
    int var332 = 0;
    while (var332 < 7) {
        var332 += 4;
        var332++;
    }    int var499 = 0;
    while (var499 < 5) {
        var499 += 3;
        var499++;
    }

    int var190 = 28;
    if (var190 % 2 == 0) {
        printf("var190 is even\n");
    } else {
        printf("var190 is odd\n");
    }

    int var849 = 89;
    if (var849 % 2 == 0) {
        printf("var849 is even\n");
    } else {
        printf("var849 is odd\n");
    }

    int var651 = 55;
    if (var651 % 2 == 0) {
        printf("var651 is even\n");
    } else {
        printf("var651 is odd\n");
    }

    return 0;
}
