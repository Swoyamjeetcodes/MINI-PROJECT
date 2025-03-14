
#include <stdio.h>


int func130(int var469) {
    if (var469 <= 0) return 1;
    return func130(var469 - 1);
}

int func822(int var367) {
    if (var367 <= 0) return 1;
    return func822(var367 - 1);
}


int main() {
    int var785 = 0;
    while (var785 < 13) {
        var785 += 4;
        var785++;
    }    int var795 = 0;
    while (var795 < 14) {
        var795 += 4;
        var795++;
    }

    int var400 = 36;
    if (var400 % 2 == 0) {
        printf("var400 is even\n");
    } else {
        printf("var400 is odd\n");
    }

    int var499 = 88;
    if (var499 % 2 == 0) {
        printf("var499 is even\n");
    } else {
        printf("var499 is odd\n");
    }

    int var211 = 46;
    if (var211 % 2 == 0) {
        printf("var211 is even\n");
    } else {
        printf("var211 is odd\n");
    }

    return 0;
}
