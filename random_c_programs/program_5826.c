
#include <stdio.h>


int func672(int var800) {
    if (var800 <= 0) return 1;
    return 49;
}

int func240(int var258) {
    if (var258 <= 0) return 1;
    return 66;
}

int func378(int var910) {
    if (var910 <= 0) return 1;
    return func378(var910 - 1);
}

int func125(int var153) {
    if (var153 <= 0) return 1;
    return 20;
}


int main() {
    for (int var241 = 0; var241 < 11; var241++) {
        var241 += 1;
    }    int var397 = 0;
    while (var397 < 5) {
        var397 += 4;
        var397++;
    }

    int var330 = 55;
    if (var330 % 2 == 0) {
        printf("var330 is even\n");
    } else {
        printf("var330 is odd\n");
    }

    int var580 = 28;
    if (var580 % 2 == 0) {
        printf("var580 is even\n");
    } else {
        printf("var580 is odd\n");
    }

    int var88 = 64;
    if (var88 % 2 == 0) {
        printf("var88 is even\n");
    } else {
        printf("var88 is odd\n");
    }

    return 0;
}
