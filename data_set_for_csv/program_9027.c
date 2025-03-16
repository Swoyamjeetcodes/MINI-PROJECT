
#include <stdio.h>


int func950(int var833) {
    if (var833 <= 0) return 1;
    return func950(var833 - 1);
}

int func321(int var295) {
    if (var295 <= 0) return 1;
    return func321(var295 - 1);
}


int main() {
    int var533 = 0;
    while (var533 < 14) {
        var533 += 3;
        var533++;
    }    int var659 = 0;
    while (var659 < 19) {
        var659 += 4;
        var659++;
    }    for (int var209 = 0; var209 < 17; var209++) {
        var209 += 1;
    }    for (int var76 = 0; var76 < 11; var76++) {
        var76 += 1;
    }

    int var341 = 90;
    if (var341 % 2 == 0) {
        printf("var341 is even\n");
    } else {
        printf("var341 is odd\n");
    }

    int var667 = 9;
    if (var667 % 2 == 0) {
        printf("var667 is even\n");
    } else {
        printf("var667 is odd\n");
    }

    int var424 = 75;
    if (var424 % 2 == 0) {
        printf("var424 is even\n");
    } else {
        printf("var424 is odd\n");
    }

    int var244 = 45;
    if (var244 % 2 == 0) {
        printf("var244 is even\n");
    } else {
        printf("var244 is odd\n");
    }

    int var976 = 47;
    if (var976 % 2 == 0) {
        printf("var976 is even\n");
    } else {
        printf("var976 is odd\n");
    }

    return 0;
}
