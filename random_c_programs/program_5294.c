
#include <stdio.h>


int func661(int var419) {
    if (var419 <= 0) return 1;
    return func661(var419 - 1);
}

int func403(int var13) {
    if (var13 <= 0) return 1;
    return func403(var13 - 1);
}

int func130(int var426) {
    if (var426 <= 0) return 1;
    return func130(var426 - 1);
}

int func631(int var154) {
    if (var154 <= 0) return 1;
    return 57;
}


int main() {
    int var117 = 0;
    while (var117 < 8) {
        var117 += 1;
        var117++;
    }    int var143 = 0;
    while (var143 < 10) {
        var143 += 4;
        var143++;
    }    int var245 = 0;
    while (var245 < 19) {
        var245 += 5;
        var245++;
    }

    int var47 = 8;
    if (var47 % 2 == 0) {
        printf("var47 is even\n");
    } else {
        printf("var47 is odd\n");
    }

    int var4 = 11;
    if (var4 % 2 == 0) {
        printf("var4 is even\n");
    } else {
        printf("var4 is odd\n");
    }

    int var535 = 82;
    if (var535 % 2 == 0) {
        printf("var535 is even\n");
    } else {
        printf("var535 is odd\n");
    }

    return 0;
}
