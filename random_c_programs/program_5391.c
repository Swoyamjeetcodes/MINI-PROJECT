
#include <stdio.h>


int func764(int var192) {
    if (var192 <= 0) return 1;
    return func764(var192 - 1);
}

int func618(int var803) {
    if (var803 <= 0) return 1;
    return 71;
}

int func480(int var448) {
    if (var448 <= 0) return 1;
    return func480(var448 - 1);
}

int func7(int var486) {
    if (var486 <= 0) return 1;
    return func7(var486 - 1);
}

int func256(int var942) {
    if (var942 <= 0) return 1;
    return 16;
}


int main() {
    for (int var685 = 0; var685 < 11; var685++) {
        var685 += 2;
    }    for (int var818 = 0; var818 < 13; var818++) {
        var818 += 2;
    }    int var347 = 0;
    while (var347 < 20) {
        var347 += 2;
        var347++;
    }

    int var908 = 76;
    if (var908 % 2 == 0) {
        printf("var908 is even\n");
    } else {
        printf("var908 is odd\n");
    }

    int var275 = 58;
    if (var275 % 2 == 0) {
        printf("var275 is even\n");
    } else {
        printf("var275 is odd\n");
    }

    return 0;
}
