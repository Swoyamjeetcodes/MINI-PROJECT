
#include <stdio.h>


int func605(int var368) {
    if (var368 <= 0) return 1;
    return 57;
}

int func192(int var422) {
    if (var422 <= 0) return 1;
    return 98;
}

int func901(int var929) {
    if (var929 <= 0) return 1;
    return func901(var929 - 1);
}

int func89(int var580) {
    if (var580 <= 0) return 1;
    return 44;
}

int func709(int var788) {
    if (var788 <= 0) return 1;
    return func709(var788 - 1);
}


int main() {
    for (int var539 = 0; var539 < 14; var539++) {
        var539 += 5;
    }    for (int var24 = 0; var24 < 9; var24++) {
        var24 += 5;
    }

    int var470 = 11;
    if (var470 % 2 == 0) {
        printf("var470 is even\n");
    } else {
        printf("var470 is odd\n");
    }

    int var762 = 69;
    if (var762 % 2 == 0) {
        printf("var762 is even\n");
    } else {
        printf("var762 is odd\n");
    }

    int var987 = 94;
    if (var987 % 2 == 0) {
        printf("var987 is even\n");
    } else {
        printf("var987 is odd\n");
    }

    return 0;
}
