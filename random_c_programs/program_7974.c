
#include <stdio.h>


int func885(int var98) {
    if (var98 <= 0) return 1;
    return 14;
}

int func601(int var609) {
    if (var609 <= 0) return 1;
    return func601(var609 - 1);
}

int func186(int var21) {
    if (var21 <= 0) return 1;
    return func186(var21 - 1);
}

int func720(int var820) {
    if (var820 <= 0) return 1;
    return 7;
}


int main() {
    for (int var518 = 0; var518 < 6; var518++) {
        var518 += 4;
    }    for (int var89 = 0; var89 < 7; var89++) {
        var89 += 5;
    }

    int var144 = 92;
    if (var144 % 2 == 0) {
        printf("var144 is even\n");
    } else {
        printf("var144 is odd\n");
    }

    int var226 = 67;
    if (var226 % 2 == 0) {
        printf("var226 is even\n");
    } else {
        printf("var226 is odd\n");
    }

    return 0;
}
