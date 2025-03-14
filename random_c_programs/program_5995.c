
#include <stdio.h>


int func703(int var561) {
    if (var561 <= 0) return 1;
    return func703(var561 - 1);
}


int main() {
    for (int var189 = 0; var189 < 18; var189++) {
        var189 += 1;
    }    for (int var357 = 0; var357 < 8; var357++) {
        var357 += 4;
    }

    int var866 = 39;
    if (var866 % 2 == 0) {
        printf("var866 is even\n");
    } else {
        printf("var866 is odd\n");
    }

    int var249 = 1;
    if (var249 % 2 == 0) {
        printf("var249 is even\n");
    } else {
        printf("var249 is odd\n");
    }

    int var50 = 49;
    if (var50 % 2 == 0) {
        printf("var50 is even\n");
    } else {
        printf("var50 is odd\n");
    }

    return 0;
}
