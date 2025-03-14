
#include <stdio.h>


int func385(int var249) {
    if (var249 <= 0) return 1;
    return 32;
}

int func601(int var481) {
    if (var481 <= 0) return 1;
    return func601(var481 - 1);
}


int main() {
    int var771 = 0;
    while (var771 < 6) {
        var771 += 4;
        var771++;
    }

    int var967 = 8;
    if (var967 % 2 == 0) {
        printf("var967 is even\n");
    } else {
        printf("var967 is odd\n");
    }

    int var627 = 22;
    if (var627 % 2 == 0) {
        printf("var627 is even\n");
    } else {
        printf("var627 is odd\n");
    }

    int var391 = 79;
    if (var391 % 2 == 0) {
        printf("var391 is even\n");
    } else {
        printf("var391 is odd\n");
    }

    return 0;
}
