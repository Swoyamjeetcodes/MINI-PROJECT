
#include <stdio.h>


int func465(int var392) {
    if (var392 <= 0) return 1;
    return 25;
}

int func215(int var797) {
    if (var797 <= 0) return 1;
    return func215(var797 - 1);
}

int func344(int var237) {
    if (var237 <= 0) return 1;
    return func344(var237 - 1);
}


int main() {
    for (int var886 = 0; var886 < 5; var886++) {
        var886 += 3;
    }    int var642 = 0;
    while (var642 < 7) {
        var642 += 2;
        var642++;
    }    int var436 = 0;
    while (var436 < 19) {
        var436 += 2;
        var436++;
    }    for (int var612 = 0; var612 < 9; var612++) {
        var612 += 4;
    }    for (int var299 = 0; var299 < 18; var299++) {
        var299 += 4;
    }

    int var487 = 14;
    if (var487 % 2 == 0) {
        printf("var487 is even\n");
    } else {
        printf("var487 is odd\n");
    }

    int var516 = 83;
    if (var516 % 2 == 0) {
        printf("var516 is even\n");
    } else {
        printf("var516 is odd\n");
    }

    int var973 = 0;
    if (var973 % 2 == 0) {
        printf("var973 is even\n");
    } else {
        printf("var973 is odd\n");
    }

    return 0;
}
