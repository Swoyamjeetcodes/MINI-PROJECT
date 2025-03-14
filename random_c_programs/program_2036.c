
#include <stdio.h>


int func950(int var217) {
    if (var217 <= 0) return 1;
    return 29;
}

int func777(int var230) {
    if (var230 <= 0) return 1;
    return func777(var230 - 1);
}

int func227(int var704) {
    if (var704 <= 0) return 1;
    return func227(var704 - 1);
}

int func338(int var530) {
    if (var530 <= 0) return 1;
    return func338(var530 - 1);
}

int func305(int var835) {
    if (var835 <= 0) return 1;
    return func305(var835 - 1);
}

int func787(int var491) {
    if (var491 <= 0) return 1;
    return 57;
}

int func97(int var936) {
    if (var936 <= 0) return 1;
    return func97(var936 - 1);
}


int main() {
    for (int var636 = 0; var636 < 10; var636++) {
        var636 += 3;
    }    for (int var147 = 0; var147 < 7; var147++) {
        var147 += 2;
    }    int var184 = 0;
    while (var184 < 13) {
        var184 += 1;
        var184++;
    }    int var400 = 0;
    while (var400 < 11) {
        var400 += 3;
        var400++;
    }

    int var948 = 10;
    if (var948 % 2 == 0) {
        printf("var948 is even\n");
    } else {
        printf("var948 is odd\n");
    }

    return 0;
}
