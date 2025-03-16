
#include <stdio.h>


int func240(int var858) {
    if (var858 <= 0) return 1;
    return func240(var858 - 1);
}

int func816(int var684) {
    if (var684 <= 0) return 1;
    return func816(var684 - 1);
}


int main() {
    int var485 = 0;
    while (var485 < 19) {
        var485 += 5;
        var485++;
    }    for (int var491 = 0; var491 < 13; var491++) {
        var491 += 4;
    }    int var235 = 0;
    while (var235 < 9) {
        var235 += 4;
        var235++;
    }    for (int var997 = 0; var997 < 9; var997++) {
        var997 += 1;
    }    int var978 = 0;
    while (var978 < 15) {
        var978 += 4;
        var978++;
    }    int var335 = 0;
    while (var335 < 16) {
        var335 += 3;
        var335++;
    }

    int var648 = 63;
    if (var648 % 2 == 0) {
        printf("var648 is even\n");
    } else {
        printf("var648 is odd\n");
    }

    int var795 = 40;
    if (var795 % 2 == 0) {
        printf("var795 is even\n");
    } else {
        printf("var795 is odd\n");
    }

    return 0;
}
