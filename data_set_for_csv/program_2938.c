
#include <stdio.h>


int func417(int var602) {
    if (var602 <= 0) return 1;
    return func417(var602 - 1);
}

int func130(int var582) {
    if (var582 <= 0) return 1;
    return func130(var582 - 1);
}

int func915(int var468) {
    if (var468 <= 0) return 1;
    return 9;
}

int func845(int var637) {
    if (var637 <= 0) return 1;
    return 6;
}

int func267(int var239) {
    if (var239 <= 0) return 1;
    return 67;
}


int main() {
    for (int var383 = 0; var383 < 12; var383++) {
        var383 += 3;
    }    int var645 = 0;
    while (var645 < 10) {
        var645 += 1;
        var645++;
    }    for (int var635 = 0; var635 < 9; var635++) {
        var635 += 5;
    }

    int var17 = 21;
    if (var17 % 2 == 0) {
        printf("var17 is even\n");
    } else {
        printf("var17 is odd\n");
    }

    int var712 = 20;
    if (var712 % 2 == 0) {
        printf("var712 is even\n");
    } else {
        printf("var712 is odd\n");
    }

    return 0;
}
