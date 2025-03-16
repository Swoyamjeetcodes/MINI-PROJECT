
#include <stdio.h>


int func70(int var913) {
    if (var913 <= 0) return 1;
    return func70(var913 - 1);
}

int func553(int var265) {
    if (var265 <= 0) return 1;
    return func553(var265 - 1);
}


int main() {
    for (int var196 = 0; var196 < 14; var196++) {
        var196 += 1;
    }    for (int var795 = 0; var795 < 15; var795++) {
        var795 += 4;
    }    int var597 = 0;
    while (var597 < 16) {
        var597 += 4;
        var597++;
    }    int var976 = 0;
    while (var976 < 14) {
        var976 += 4;
        var976++;
    }

    int var540 = 76;
    if (var540 % 2 == 0) {
        printf("var540 is even\n");
    } else {
        printf("var540 is odd\n");
    }

    int var564 = 12;
    if (var564 % 2 == 0) {
        printf("var564 is even\n");
    } else {
        printf("var564 is odd\n");
    }

    int var60 = 87;
    if (var60 % 2 == 0) {
        printf("var60 is even\n");
    } else {
        printf("var60 is odd\n");
    }

    return 0;
}
