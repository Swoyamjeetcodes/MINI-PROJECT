
#include <stdio.h>


int func62(int var494) {
    if (var494 <= 0) return 1;
    return func62(var494 - 1);
}

int func614(int var95) {
    if (var95 <= 0) return 1;
    return func614(var95 - 1);
}

int func281(int var886) {
    if (var886 <= 0) return 1;
    return func281(var886 - 1);
}


int main() {
    for (int var321 = 0; var321 < 6; var321++) {
        var321 += 4;
    }    int var132 = 0;
    while (var132 < 14) {
        var132 += 4;
        var132++;
    }

    int var850 = 73;
    if (var850 % 2 == 0) {
        printf("var850 is even\n");
    } else {
        printf("var850 is odd\n");
    }

    return 0;
}
