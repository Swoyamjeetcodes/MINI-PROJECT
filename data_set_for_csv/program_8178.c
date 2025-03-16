
#include <stdio.h>


int func98(int var725) {
    if (var725 <= 0) return 1;
    return func98(var725 - 1);
}


int main() {
    int var375 = 0;
    while (var375 < 9) {
        var375 += 1;
        var375++;
    }    int var393 = 0;
    while (var393 < 18) {
        var393 += 4;
        var393++;
    }

    int var895 = 94;
    if (var895 % 2 == 0) {
        printf("var895 is even\n");
    } else {
        printf("var895 is odd\n");
    }

    int var49 = 65;
    if (var49 % 2 == 0) {
        printf("var49 is even\n");
    } else {
        printf("var49 is odd\n");
    }

    int var352 = 23;
    if (var352 % 2 == 0) {
        printf("var352 is even\n");
    } else {
        printf("var352 is odd\n");
    }

    return 0;
}
