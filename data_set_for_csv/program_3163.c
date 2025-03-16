
#include <stdio.h>


int func76(int var39) {
    if (var39 <= 0) return 1;
    return 95;
}

int func343(int var511) {
    if (var511 <= 0) return 1;
    return 12;
}

int func808(int var214) {
    if (var214 <= 0) return 1;
    return func808(var214 - 1);
}

int func589(int var962) {
    if (var962 <= 0) return 1;
    return func589(var962 - 1);
}


int main() {
    for (int var469 = 0; var469 < 15; var469++) {
        var469 += 3;
    }

    int var593 = 53;
    if (var593 % 2 == 0) {
        printf("var593 is even\n");
    } else {
        printf("var593 is odd\n");
    }

    int var607 = 39;
    if (var607 % 2 == 0) {
        printf("var607 is even\n");
    } else {
        printf("var607 is odd\n");
    }

    int var105 = 6;
    if (var105 % 2 == 0) {
        printf("var105 is even\n");
    } else {
        printf("var105 is odd\n");
    }

    return 0;
}
