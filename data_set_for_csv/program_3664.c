
#include <stdio.h>


int func31(int var656) {
    if (var656 <= 0) return 1;
    return func31(var656 - 1);
}

int func631(int var478) {
    if (var478 <= 0) return 1;
    return func631(var478 - 1);
}

int func193(int var318) {
    if (var318 <= 0) return 1;
    return func193(var318 - 1);
}

int func882(int var837) {
    if (var837 <= 0) return 1;
    return 13;
}


int main() {
    for (int var883 = 0; var883 < 11; var883++) {
        var883 += 2;
    }

    int var164 = 79;
    if (var164 % 2 == 0) {
        printf("var164 is even\n");
    } else {
        printf("var164 is odd\n");
    }

    int var908 = 68;
    if (var908 % 2 == 0) {
        printf("var908 is even\n");
    } else {
        printf("var908 is odd\n");
    }

    int var85 = 41;
    if (var85 % 2 == 0) {
        printf("var85 is even\n");
    } else {
        printf("var85 is odd\n");
    }

    int var309 = 82;
    if (var309 % 2 == 0) {
        printf("var309 is even\n");
    } else {
        printf("var309 is odd\n");
    }

    int var51 = 42;
    if (var51 % 2 == 0) {
        printf("var51 is even\n");
    } else {
        printf("var51 is odd\n");
    }

    return 0;
}
