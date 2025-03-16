
#include <stdio.h>


int func655(int var30) {
    if (var30 <= 0) return 1;
    return 60;
}

int func429(int var371) {
    if (var371 <= 0) return 1;
    return func429(var371 - 1);
}


int main() {
    int var796 = 0;
    while (var796 < 13) {
        var796 += 2;
        var796++;
    }    int var661 = 0;
    while (var661 < 9) {
        var661 += 2;
        var661++;
    }    int var89 = 0;
    while (var89 < 15) {
        var89 += 3;
        var89++;
    }

    int var517 = 36;
    if (var517 % 2 == 0) {
        printf("var517 is even\n");
    } else {
        printf("var517 is odd\n");
    }

    int var714 = 81;
    if (var714 % 2 == 0) {
        printf("var714 is even\n");
    } else {
        printf("var714 is odd\n");
    }

    int var769 = 63;
    if (var769 % 2 == 0) {
        printf("var769 is even\n");
    } else {
        printf("var769 is odd\n");
    }

    return 0;
}
