
#include <stdio.h>


int func650(int var566) {
    if (var566 <= 0) return 1;
    return func650(var566 - 1);
}

int func157(int var64) {
    if (var64 <= 0) return 1;
    return func157(var64 - 1);
}

int func255(int var229) {
    if (var229 <= 0) return 1;
    return func255(var229 - 1);
}

int func524(int var840) {
    if (var840 <= 0) return 1;
    return func524(var840 - 1);
}

int func830(int var925) {
    if (var925 <= 0) return 1;
    return 68;
}

int func630(int var2) {
    if (var2 <= 0) return 1;
    return func630(var2 - 1);
}


int main() {
    int var318 = 0;
    while (var318 < 10) {
        var318 += 3;
        var318++;
    }    int var957 = 0;
    while (var957 < 10) {
        var957 += 4;
        var957++;
    }    int var314 = 0;
    while (var314 < 8) {
        var314 += 4;
        var314++;
    }

    int var382 = 65;
    if (var382 % 2 == 0) {
        printf("var382 is even\n");
    } else {
        printf("var382 is odd\n");
    }

    int var299 = 83;
    if (var299 % 2 == 0) {
        printf("var299 is even\n");
    } else {
        printf("var299 is odd\n");
    }

    int var124 = 30;
    if (var124 % 2 == 0) {
        printf("var124 is even\n");
    } else {
        printf("var124 is odd\n");
    }

    return 0;
}
