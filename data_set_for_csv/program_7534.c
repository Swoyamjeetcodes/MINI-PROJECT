
#include <stdio.h>


int func966(int var433) {
    if (var433 <= 0) return 1;
    return func966(var433 - 1);
}

int func304(int var372) {
    if (var372 <= 0) return 1;
    return func304(var372 - 1);
}


int main() {
    int var139 = 0;
    while (var139 < 6) {
        var139 += 5;
        var139++;
    }    int var490 = 0;
    while (var490 < 10) {
        var490 += 1;
        var490++;
    }    for (int var540 = 0; var540 < 8; var540++) {
        var540 += 3;
    }    int var536 = 0;
    while (var536 < 17) {
        var536 += 3;
        var536++;
    }    int var976 = 0;
    while (var976 < 10) {
        var976 += 2;
        var976++;
    }

    int var733 = 62;
    if (var733 % 2 == 0) {
        printf("var733 is even\n");
    } else {
        printf("var733 is odd\n");
    }

    int var351 = 68;
    if (var351 % 2 == 0) {
        printf("var351 is even\n");
    } else {
        printf("var351 is odd\n");
    }

    int var114 = 98;
    if (var114 % 2 == 0) {
        printf("var114 is even\n");
    } else {
        printf("var114 is odd\n");
    }

    return 0;
}
