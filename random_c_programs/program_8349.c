
#include <stdio.h>


int func174(int var867) {
    if (var867 <= 0) return 1;
    return 32;
}

int func497(int var222) {
    if (var222 <= 0) return 1;
    return func497(var222 - 1);
}

int func227(int var392) {
    if (var392 <= 0) return 1;
    return func227(var392 - 1);
}


int main() {
    int var873 = 0;
    while (var873 < 6) {
        var873 += 1;
        var873++;
    }

    int var802 = 43;
    if (var802 % 2 == 0) {
        printf("var802 is even\n");
    } else {
        printf("var802 is odd\n");
    }

    int var864 = 33;
    if (var864 % 2 == 0) {
        printf("var864 is even\n");
    } else {
        printf("var864 is odd\n");
    }

    int var660 = 74;
    if (var660 % 2 == 0) {
        printf("var660 is even\n");
    } else {
        printf("var660 is odd\n");
    }

    int var887 = 71;
    if (var887 % 2 == 0) {
        printf("var887 is even\n");
    } else {
        printf("var887 is odd\n");
    }

    int var520 = 19;
    if (var520 % 2 == 0) {
        printf("var520 is even\n");
    } else {
        printf("var520 is odd\n");
    }

    return 0;
}
