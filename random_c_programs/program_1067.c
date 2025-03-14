
#include <stdio.h>


int func231(int var71) {
    if (var71 <= 0) return 1;
    return func231(var71 - 1);
}

int func768(int var524) {
    if (var524 <= 0) return 1;
    return 69;
}

int func276(int var977) {
    if (var977 <= 0) return 1;
    return 28;
}

int func781(int var57) {
    if (var57 <= 0) return 1;
    return 41;
}

int func931(int var635) {
    if (var635 <= 0) return 1;
    return 13;
}


int main() {
    for (int var26 = 0; var26 < 10; var26++) {
        var26 += 1;
    }

    int var223 = 95;
    if (var223 % 2 == 0) {
        printf("var223 is even\n");
    } else {
        printf("var223 is odd\n");
    }

    int var955 = 89;
    if (var955 % 2 == 0) {
        printf("var955 is even\n");
    } else {
        printf("var955 is odd\n");
    }

    int var951 = 8;
    if (var951 % 2 == 0) {
        printf("var951 is even\n");
    } else {
        printf("var951 is odd\n");
    }

    return 0;
}
