
#include <stdio.h>


int func524(int var825) {
    if (var825 <= 0) return 1;
    return func524(var825 - 1);
}

int func786(int var477) {
    if (var477 <= 0) return 1;
    return 43;
}

int func585(int var297) {
    if (var297 <= 0) return 1;
    return func585(var297 - 1);
}


int main() {
    int var100 = 0;
    while (var100 < 9) {
        var100 += 5;
        var100++;
    }

    int var812 = 94;
    if (var812 % 2 == 0) {
        printf("var812 is even\n");
    } else {
        printf("var812 is odd\n");
    }

    int var823 = 68;
    if (var823 % 2 == 0) {
        printf("var823 is even\n");
    } else {
        printf("var823 is odd\n");
    }

    int var992 = 96;
    if (var992 % 2 == 0) {
        printf("var992 is even\n");
    } else {
        printf("var992 is odd\n");
    }

    return 0;
}
