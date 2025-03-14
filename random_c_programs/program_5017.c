
#include <stdio.h>


int func243(int var490) {
    if (var490 <= 0) return 1;
    return 15;
}

int func824(int var454) {
    if (var454 <= 0) return 1;
    return 3;
}

int func452(int var903) {
    if (var903 <= 0) return 1;
    return 35;
}

int func550(int var144) {
    if (var144 <= 0) return 1;
    return func550(var144 - 1);
}

int func527(int var685) {
    if (var685 <= 0) return 1;
    return 43;
}


int main() {
    for (int var602 = 0; var602 < 10; var602++) {
        var602 += 5;
    }    int var155 = 0;
    while (var155 < 14) {
        var155 += 5;
        var155++;
    }

    int var36 = 81;
    if (var36 % 2 == 0) {
        printf("var36 is even\n");
    } else {
        printf("var36 is odd\n");
    }

    int var610 = 94;
    if (var610 % 2 == 0) {
        printf("var610 is even\n");
    } else {
        printf("var610 is odd\n");
    }

    return 0;
}
