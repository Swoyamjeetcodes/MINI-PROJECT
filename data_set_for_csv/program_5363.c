
#include <stdio.h>


int func150(int var27) {
    if (var27 <= 0) return 1;
    return func150(var27 - 1);
}

int func394(int var760) {
    if (var760 <= 0) return 1;
    return func394(var760 - 1);
}

int func713(int var701) {
    if (var701 <= 0) return 1;
    return 51;
}

int func591(int var415) {
    if (var415 <= 0) return 1;
    return 72;
}


int main() {
    int var629 = 0;
    while (var629 < 12) {
        var629 += 4;
        var629++;
    }    for (int var875 = 0; var875 < 5; var875++) {
        var875 += 1;
    }

    int var258 = 79;
    if (var258 % 2 == 0) {
        printf("var258 is even\n");
    } else {
        printf("var258 is odd\n");
    }

    int var690 = 63;
    if (var690 % 2 == 0) {
        printf("var690 is even\n");
    } else {
        printf("var690 is odd\n");
    }

    return 0;
}
