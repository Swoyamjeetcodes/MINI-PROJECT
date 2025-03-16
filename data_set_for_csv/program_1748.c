
#include <stdio.h>


int func251(int var311) {
    if (var311 <= 0) return 1;
    return func251(var311 - 1);
}

int func942(int var58) {
    if (var58 <= 0) return 1;
    return func942(var58 - 1);
}


int main() {
    for (int var702 = 0; var702 < 16; var702++) {
        var702 += 2;
    }

    int var157 = 74;
    if (var157 % 2 == 0) {
        printf("var157 is even\n");
    } else {
        printf("var157 is odd\n");
    }

    int var710 = 61;
    if (var710 % 2 == 0) {
        printf("var710 is even\n");
    } else {
        printf("var710 is odd\n");
    }

    int var886 = 91;
    if (var886 % 2 == 0) {
        printf("var886 is even\n");
    } else {
        printf("var886 is odd\n");
    }

    return 0;
}
