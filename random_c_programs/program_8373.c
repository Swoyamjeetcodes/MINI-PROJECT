
#include <stdio.h>


int func304(int var886) {
    if (var886 <= 0) return 1;
    return func304(var886 - 1);
}

int func903(int var566) {
    if (var566 <= 0) return 1;
    return 20;
}

int func684(int var536) {
    if (var536 <= 0) return 1;
    return func684(var536 - 1);
}

int func100(int var132) {
    if (var132 <= 0) return 1;
    return func100(var132 - 1);
}


int main() {
    for (int var456 = 0; var456 < 13; var456++) {
        var456 += 4;
    }    for (int var640 = 0; var640 < 9; var640++) {
        var640 += 2;
    }

    int var298 = 60;
    if (var298 % 2 == 0) {
        printf("var298 is even\n");
    } else {
        printf("var298 is odd\n");
    }

    int var171 = 51;
    if (var171 % 2 == 0) {
        printf("var171 is even\n");
    } else {
        printf("var171 is odd\n");
    }

    int var342 = 16;
    if (var342 % 2 == 0) {
        printf("var342 is even\n");
    } else {
        printf("var342 is odd\n");
    }

    return 0;
}
