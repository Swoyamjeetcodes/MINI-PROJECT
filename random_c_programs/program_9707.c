
#include <stdio.h>


int func255(int var78) {
    if (var78 <= 0) return 1;
    return func255(var78 - 1);
}

int func417(int var232) {
    if (var232 <= 0) return 1;
    return func417(var232 - 1);
}

int func496(int var915) {
    if (var915 <= 0) return 1;
    return func496(var915 - 1);
}

int func95(int var462) {
    if (var462 <= 0) return 1;
    return 46;
}

int func614(int var713) {
    if (var713 <= 0) return 1;
    return func614(var713 - 1);
}


int main() {
    int var308 = 0;
    while (var308 < 8) {
        var308 += 2;
        var308++;
    }    int var627 = 0;
    while (var627 < 7) {
        var627 += 2;
        var627++;
    }

    int var852 = 23;
    if (var852 % 2 == 0) {
        printf("var852 is even\n");
    } else {
        printf("var852 is odd\n");
    }

    int var948 = 93;
    if (var948 % 2 == 0) {
        printf("var948 is even\n");
    } else {
        printf("var948 is odd\n");
    }

    return 0;
}
