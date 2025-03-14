
#include <stdio.h>


int func805(int var523) {
    if (var523 <= 0) return 1;
    return 61;
}

int func142(int var492) {
    if (var492 <= 0) return 1;
    return func142(var492 - 1);
}

int func950(int var581) {
    if (var581 <= 0) return 1;
    return func950(var581 - 1);
}

int func764(int var238) {
    if (var238 <= 0) return 1;
    return func764(var238 - 1);
}

int func474(int var803) {
    if (var803 <= 0) return 1;
    return func474(var803 - 1);
}


int main() {
    int var311 = 0;
    while (var311 < 19) {
        var311 += 1;
        var311++;
    }    for (int var536 = 0; var536 < 18; var536++) {
        var536 += 5;
    }    int var40 = 0;
    while (var40 < 15) {
        var40 += 4;
        var40++;
    }

    int var742 = 34;
    if (var742 % 2 == 0) {
        printf("var742 is even\n");
    } else {
        printf("var742 is odd\n");
    }

    int var516 = 16;
    if (var516 % 2 == 0) {
        printf("var516 is even\n");
    } else {
        printf("var516 is odd\n");
    }

    int var505 = 77;
    if (var505 % 2 == 0) {
        printf("var505 is even\n");
    } else {
        printf("var505 is odd\n");
    }

    return 0;
}
