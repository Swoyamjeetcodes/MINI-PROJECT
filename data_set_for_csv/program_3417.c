
#include <stdio.h>


int func300(int var103) {
    if (var103 <= 0) return 1;
    return func300(var103 - 1);
}

int func379(int var695) {
    if (var695 <= 0) return 1;
    return 32;
}

int func595(int var562) {
    if (var562 <= 0) return 1;
    return func595(var562 - 1);
}


int main() {
    int var608 = 0;
    while (var608 < 8) {
        var608 += 3;
        var608++;
    }

    int var983 = 75;
    if (var983 % 2 == 0) {
        printf("var983 is even\n");
    } else {
        printf("var983 is odd\n");
    }

    int var136 = 20;
    if (var136 % 2 == 0) {
        printf("var136 is even\n");
    } else {
        printf("var136 is odd\n");
    }

    int var495 = 79;
    if (var495 % 2 == 0) {
        printf("var495 is even\n");
    } else {
        printf("var495 is odd\n");
    }

    return 0;
}
