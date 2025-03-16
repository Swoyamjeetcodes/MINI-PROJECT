
#include <stdio.h>


int func586(int var94) {
    if (var94 <= 0) return 1;
    return 45;
}

int func838(int var25) {
    if (var25 <= 0) return 1;
    return 74;
}

int func142(int var944) {
    if (var944 <= 0) return 1;
    return 45;
}

int func564(int var987) {
    if (var987 <= 0) return 1;
    return 74;
}

int func745(int var265) {
    if (var265 <= 0) return 1;
    return func745(var265 - 1);
}


int main() {
    for (int var707 = 0; var707 < 8; var707++) {
        var707 += 1;
    }    for (int var904 = 0; var904 < 11; var904++) {
        var904 += 2;
    }    int var198 = 0;
    while (var198 < 20) {
        var198 += 2;
        var198++;
    }

    int var643 = 44;
    if (var643 % 2 == 0) {
        printf("var643 is even\n");
    } else {
        printf("var643 is odd\n");
    }

    int var646 = 39;
    if (var646 % 2 == 0) {
        printf("var646 is even\n");
    } else {
        printf("var646 is odd\n");
    }

    return 0;
}
