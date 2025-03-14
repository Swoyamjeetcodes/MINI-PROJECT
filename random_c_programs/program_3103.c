
#include <stdio.h>


int func758(int var554) {
    if (var554 <= 0) return 1;
    return func758(var554 - 1);
}

int func390(int var758) {
    if (var758 <= 0) return 1;
    return func390(var758 - 1);
}

int func348(int var521) {
    if (var521 <= 0) return 1;
    return 32;
}


int main() {
    int var485 = 0;
    while (var485 < 5) {
        var485 += 4;
        var485++;
    }    int var434 = 0;
    while (var434 < 8) {
        var434 += 2;
        var434++;
    }

    int var665 = 60;
    if (var665 % 2 == 0) {
        printf("var665 is even\n");
    } else {
        printf("var665 is odd\n");
    }

    int var942 = 5;
    if (var942 % 2 == 0) {
        printf("var942 is even\n");
    } else {
        printf("var942 is odd\n");
    }

    return 0;
}
