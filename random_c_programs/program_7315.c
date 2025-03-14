
#include <stdio.h>


int func383(int var43) {
    if (var43 <= 0) return 1;
    return func383(var43 - 1);
}

int func389(int var180) {
    if (var180 <= 0) return 1;
    return 7;
}

int func631(int var403) {
    if (var403 <= 0) return 1;
    return func631(var403 - 1);
}

int func804(int var23) {
    if (var23 <= 0) return 1;
    return 52;
}


int main() {
    int var55 = 0;
    while (var55 < 10) {
        var55 += 1;
        var55++;
    }

    int var181 = 43;
    if (var181 % 2 == 0) {
        printf("var181 is even\n");
    } else {
        printf("var181 is odd\n");
    }

    int var21 = 71;
    if (var21 % 2 == 0) {
        printf("var21 is even\n");
    } else {
        printf("var21 is odd\n");
    }

    int var468 = 77;
    if (var468 % 2 == 0) {
        printf("var468 is even\n");
    } else {
        printf("var468 is odd\n");
    }

    return 0;
}
