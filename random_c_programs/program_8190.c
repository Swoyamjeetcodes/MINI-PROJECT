
#include <stdio.h>


int func485(int var519) {
    if (var519 <= 0) return 1;
    return func485(var519 - 1);
}

int func495(int var978) {
    if (var978 <= 0) return 1;
    return func495(var978 - 1);
}


int main() {
    int var600 = 0;
    while (var600 < 8) {
        var600 += 4;
        var600++;
    }    for (int var481 = 0; var481 < 17; var481++) {
        var481 += 2;
    }    for (int var28 = 0; var28 < 18; var28++) {
        var28 += 4;
    }

    int var488 = 59;
    if (var488 % 2 == 0) {
        printf("var488 is even\n");
    } else {
        printf("var488 is odd\n");
    }

    int var884 = 56;
    if (var884 % 2 == 0) {
        printf("var884 is even\n");
    } else {
        printf("var884 is odd\n");
    }

    int var624 = 89;
    if (var624 % 2 == 0) {
        printf("var624 is even\n");
    } else {
        printf("var624 is odd\n");
    }

    return 0;
}
