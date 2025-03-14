
#include <stdio.h>


int func240(int var773) {
    if (var773 <= 0) return 1;
    return func240(var773 - 1);
}

int func275(int var628) {
    if (var628 <= 0) return 1;
    return func275(var628 - 1);
}

int func582(int var71) {
    if (var71 <= 0) return 1;
    return 49;
}

int func520(int var476) {
    if (var476 <= 0) return 1;
    return func520(var476 - 1);
}

int func498(int var811) {
    if (var811 <= 0) return 1;
    return 53;
}

int func302(int var448) {
    if (var448 <= 0) return 1;
    return func302(var448 - 1);
}

int func982(int var74) {
    if (var74 <= 0) return 1;
    return func982(var74 - 1);
}


int main() {
    int var16 = 0;
    while (var16 < 11) {
        var16 += 4;
        var16++;
    }    for (int var131 = 0; var131 < 5; var131++) {
        var131 += 1;
    }

    int var90 = 13;
    if (var90 % 2 == 0) {
        printf("var90 is even\n");
    } else {
        printf("var90 is odd\n");
    }

    int var324 = 31;
    if (var324 % 2 == 0) {
        printf("var324 is even\n");
    } else {
        printf("var324 is odd\n");
    }

    int var674 = 7;
    if (var674 % 2 == 0) {
        printf("var674 is even\n");
    } else {
        printf("var674 is odd\n");
    }

    return 0;
}
