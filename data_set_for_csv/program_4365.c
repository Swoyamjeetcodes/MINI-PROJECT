
#include <stdio.h>


int func533(int var278) {
    if (var278 <= 0) return 1;
    return func533(var278 - 1);
}

int func623(int var505) {
    if (var505 <= 0) return 1;
    return 48;
}

int func825(int var807) {
    if (var807 <= 0) return 1;
    return 95;
}

int func803(int var70) {
    if (var70 <= 0) return 1;
    return 40;
}

int func736(int var62) {
    if (var62 <= 0) return 1;
    return func736(var62 - 1);
}


int main() {
    for (int var900 = 0; var900 < 10; var900++) {
        var900 += 5;
    }

    int var932 = 2;
    if (var932 % 2 == 0) {
        printf("var932 is even\n");
    } else {
        printf("var932 is odd\n");
    }

    int var374 = 69;
    if (var374 % 2 == 0) {
        printf("var374 is even\n");
    } else {
        printf("var374 is odd\n");
    }

    int var346 = 90;
    if (var346 % 2 == 0) {
        printf("var346 is even\n");
    } else {
        printf("var346 is odd\n");
    }

    return 0;
}
