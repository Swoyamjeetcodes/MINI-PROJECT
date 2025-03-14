
#include <stdio.h>


int func169(int var669) {
    if (var669 <= 0) return 1;
    return 77;
}

int func471(int var766) {
    if (var766 <= 0) return 1;
    return func471(var766 - 1);
}

int func475(int var120) {
    if (var120 <= 0) return 1;
    return 74;
}

int func523(int var320) {
    if (var320 <= 0) return 1;
    return func523(var320 - 1);
}


int main() {
    for (int var111 = 0; var111 < 17; var111++) {
        var111 += 5;
    }    int var894 = 0;
    while (var894 < 17) {
        var894 += 5;
        var894++;
    }    for (int var374 = 0; var374 < 15; var374++) {
        var374 += 2;
    }    int var380 = 0;
    while (var380 < 20) {
        var380 += 4;
        var380++;
    }

    int var99 = 60;
    if (var99 % 2 == 0) {
        printf("var99 is even\n");
    } else {
        printf("var99 is odd\n");
    }

    int var829 = 63;
    if (var829 % 2 == 0) {
        printf("var829 is even\n");
    } else {
        printf("var829 is odd\n");
    }

    int var329 = 67;
    if (var329 % 2 == 0) {
        printf("var329 is even\n");
    } else {
        printf("var329 is odd\n");
    }

    int var379 = 83;
    if (var379 % 2 == 0) {
        printf("var379 is even\n");
    } else {
        printf("var379 is odd\n");
    }

    return 0;
}
