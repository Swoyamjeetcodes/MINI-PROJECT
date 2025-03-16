
#include <stdio.h>


int func500(int var246) {
    if (var246 <= 0) return 1;
    return 42;
}

int func797(int var387) {
    if (var387 <= 0) return 1;
    return func797(var387 - 1);
}

int func803(int var996) {
    if (var996 <= 0) return 1;
    return 40;
}

int func167(int var628) {
    if (var628 <= 0) return 1;
    return 90;
}


int main() {
    int var941 = 0;
    while (var941 < 14) {
        var941 += 1;
        var941++;
    }    for (int var443 = 0; var443 < 11; var443++) {
        var443 += 2;
    }

    int var649 = 80;
    if (var649 % 2 == 0) {
        printf("var649 is even\n");
    } else {
        printf("var649 is odd\n");
    }

    int var557 = 82;
    if (var557 % 2 == 0) {
        printf("var557 is even\n");
    } else {
        printf("var557 is odd\n");
    }

    int var30 = 77;
    if (var30 % 2 == 0) {
        printf("var30 is even\n");
    } else {
        printf("var30 is odd\n");
    }

    return 0;
}
