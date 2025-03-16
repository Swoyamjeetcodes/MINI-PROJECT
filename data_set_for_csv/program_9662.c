
#include <stdio.h>


int func337(int var110) {
    if (var110 <= 0) return 1;
    return func337(var110 - 1);
}

int func580(int var737) {
    if (var737 <= 0) return 1;
    return 32;
}

int func33(int var431) {
    if (var431 <= 0) return 1;
    return func33(var431 - 1);
}

int func892(int var440) {
    if (var440 <= 0) return 1;
    return func892(var440 - 1);
}

int func57(int var282) {
    if (var282 <= 0) return 1;
    return func57(var282 - 1);
}


int main() {
    int var949 = 0;
    while (var949 < 15) {
        var949 += 5;
        var949++;
    }    for (int var487 = 0; var487 < 16; var487++) {
        var487 += 1;
    }    for (int var889 = 0; var889 < 19; var889++) {
        var889 += 3;
    }

    int var532 = 6;
    if (var532 % 2 == 0) {
        printf("var532 is even\n");
    } else {
        printf("var532 is odd\n");
    }

    int var403 = 59;
    if (var403 % 2 == 0) {
        printf("var403 is even\n");
    } else {
        printf("var403 is odd\n");
    }

    int var48 = 75;
    if (var48 % 2 == 0) {
        printf("var48 is even\n");
    } else {
        printf("var48 is odd\n");
    }

    return 0;
}
