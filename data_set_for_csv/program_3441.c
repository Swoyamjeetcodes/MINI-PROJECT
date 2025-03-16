
#include <stdio.h>


int func985(int var387) {
    if (var387 <= 0) return 1;
    return func985(var387 - 1);
}

int func301(int var332) {
    if (var332 <= 0) return 1;
    return func301(var332 - 1);
}

int func736(int var166) {
    if (var166 <= 0) return 1;
    return func736(var166 - 1);
}

int func611(int var898) {
    if (var898 <= 0) return 1;
    return 65;
}

int func821(int var70) {
    if (var70 <= 0) return 1;
    return 67;
}


int main() {
    for (int var254 = 0; var254 < 7; var254++) {
        var254 += 4;
    }

    int var249 = 1;
    if (var249 % 2 == 0) {
        printf("var249 is even\n");
    } else {
        printf("var249 is odd\n");
    }

    return 0;
}
