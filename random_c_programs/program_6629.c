
#include <stdio.h>


int func705(int var346) {
    if (var346 <= 0) return 1;
    return 13;
}

int func983(int var761) {
    if (var761 <= 0) return 1;
    return 28;
}

int func672(int var300) {
    if (var300 <= 0) return 1;
    return func672(var300 - 1);
}


int main() {
    int var230 = 0;
    while (var230 < 9) {
        var230 += 3;
        var230++;
    }    int var365 = 0;
    while (var365 < 14) {
        var365 += 5;
        var365++;
    }

    int var259 = 43;
    if (var259 % 2 == 0) {
        printf("var259 is even\n");
    } else {
        printf("var259 is odd\n");
    }

    int var328 = 71;
    if (var328 % 2 == 0) {
        printf("var328 is even\n");
    } else {
        printf("var328 is odd\n");
    }

    int var160 = 97;
    if (var160 % 2 == 0) {
        printf("var160 is even\n");
    } else {
        printf("var160 is odd\n");
    }

    return 0;
}
