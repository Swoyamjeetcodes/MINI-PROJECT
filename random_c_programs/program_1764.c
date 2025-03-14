
#include <stdio.h>


int func832(int var393) {
    if (var393 <= 0) return 1;
    return func832(var393 - 1);
}

int func716(int var929) {
    if (var929 <= 0) return 1;
    return 39;
}

int func330(int var282) {
    if (var282 <= 0) return 1;
    return 38;
}


int main() {
    for (int var327 = 0; var327 < 11; var327++) {
        var327 += 1;
    }    for (int var336 = 0; var336 < 14; var336++) {
        var336 += 5;
    }

    int var792 = 92;
    if (var792 % 2 == 0) {
        printf("var792 is even\n");
    } else {
        printf("var792 is odd\n");
    }

    int var986 = 12;
    if (var986 % 2 == 0) {
        printf("var986 is even\n");
    } else {
        printf("var986 is odd\n");
    }

    int var640 = 8;
    if (var640 % 2 == 0) {
        printf("var640 is even\n");
    } else {
        printf("var640 is odd\n");
    }

    return 0;
}
