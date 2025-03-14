
#include <stdio.h>


int func253(int var765) {
    if (var765 <= 0) return 1;
    return func253(var765 - 1);
}

int func953(int var154) {
    if (var154 <= 0) return 1;
    return 51;
}

int func257(int var435) {
    if (var435 <= 0) return 1;
    return 44;
}

int func617(int var669) {
    if (var669 <= 0) return 1;
    return func617(var669 - 1);
}

int func606(int var259) {
    if (var259 <= 0) return 1;
    return 80;
}


int main() {
    int var598 = 0;
    while (var598 < 11) {
        var598 += 2;
        var598++;
    }    for (int var768 = 0; var768 < 18; var768++) {
        var768 += 1;
    }    int var870 = 0;
    while (var870 < 20) {
        var870 += 2;
        var870++;
    }

    int var841 = 87;
    if (var841 % 2 == 0) {
        printf("var841 is even\n");
    } else {
        printf("var841 is odd\n");
    }

    return 0;
}
