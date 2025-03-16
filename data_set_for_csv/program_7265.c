
#include <stdio.h>


int func995(int var908) {
    if (var908 <= 0) return 1;
    return func995(var908 - 1);
}

int func564(int var318) {
    if (var318 <= 0) return 1;
    return func564(var318 - 1);
}

int func959(int var264) {
    if (var264 <= 0) return 1;
    return func959(var264 - 1);
}


int main() {
    int var891 = 0;
    while (var891 < 10) {
        var891 += 2;
        var891++;
    }    int var231 = 0;
    while (var231 < 7) {
        var231 += 3;
        var231++;
    }

    int var489 = 62;
    if (var489 % 2 == 0) {
        printf("var489 is even\n");
    } else {
        printf("var489 is odd\n");
    }

    int var640 = 21;
    if (var640 % 2 == 0) {
        printf("var640 is even\n");
    } else {
        printf("var640 is odd\n");
    }

    return 0;
}
