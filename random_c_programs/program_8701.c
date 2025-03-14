
#include <stdio.h>


int func380(int var592) {
    if (var592 <= 0) return 1;
    return func380(var592 - 1);
}

int func736(int var816) {
    if (var816 <= 0) return 1;
    return 47;
}

int func507(int var438) {
    if (var438 <= 0) return 1;
    return func507(var438 - 1);
}

int func568(int var981) {
    if (var981 <= 0) return 1;
    return 18;
}

int func117(int var398) {
    if (var398 <= 0) return 1;
    return func117(var398 - 1);
}


int main() {
    int var799 = 0;
    while (var799 < 12) {
        var799 += 3;
        var799++;
    }    for (int var234 = 0; var234 < 18; var234++) {
        var234 += 2;
    }    int var492 = 0;
    while (var492 < 6) {
        var492 += 3;
        var492++;
    }

    int var81 = 4;
    if (var81 % 2 == 0) {
        printf("var81 is even\n");
    } else {
        printf("var81 is odd\n");
    }

    int var144 = 68;
    if (var144 % 2 == 0) {
        printf("var144 is even\n");
    } else {
        printf("var144 is odd\n");
    }

    int var10 = 0;
    if (var10 % 2 == 0) {
        printf("var10 is even\n");
    } else {
        printf("var10 is odd\n");
    }

    return 0;
}
