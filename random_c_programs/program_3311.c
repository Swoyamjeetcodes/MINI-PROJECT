
#include <stdio.h>


int func268(int var413) {
    if (var413 <= 0) return 1;
    return func268(var413 - 1);
}

int func425(int var837) {
    if (var837 <= 0) return 1;
    return 77;
}

int func945(int var690) {
    if (var690 <= 0) return 1;
    return func945(var690 - 1);
}

int func812(int var384) {
    if (var384 <= 0) return 1;
    return 54;
}


int main() {
    for (int var308 = 0; var308 < 16; var308++) {
        var308 += 5;
    }    int var210 = 0;
    while (var210 < 8) {
        var210 += 1;
        var210++;
    }

    int var586 = 38;
    if (var586 % 2 == 0) {
        printf("var586 is even\n");
    } else {
        printf("var586 is odd\n");
    }

    int var947 = 66;
    if (var947 % 2 == 0) {
        printf("var947 is even\n");
    } else {
        printf("var947 is odd\n");
    }

    int var22 = 67;
    if (var22 % 2 == 0) {
        printf("var22 is even\n");
    } else {
        printf("var22 is odd\n");
    }

    return 0;
}
