
#include <stdio.h>


int func942(int var336) {
    if (var336 <= 0) return 1;
    return 11;
}

int func597(int var56) {
    if (var56 <= 0) return 1;
    return func597(var56 - 1);
}


int main() {
    for (int var67 = 0; var67 < 5; var67++) {
        var67 += 4;
    }    int var965 = 0;
    while (var965 < 12) {
        var965 += 4;
        var965++;
    }    int var379 = 0;
    while (var379 < 18) {
        var379 += 2;
        var379++;
    }    int var643 = 0;
    while (var643 < 18) {
        var643 += 5;
        var643++;
    }

    int var50 = 21;
    if (var50 % 2 == 0) {
        printf("var50 is even\n");
    } else {
        printf("var50 is odd\n");
    }

    int var645 = 71;
    if (var645 % 2 == 0) {
        printf("var645 is even\n");
    } else {
        printf("var645 is odd\n");
    }

    return 0;
}
