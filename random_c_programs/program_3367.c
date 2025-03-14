
#include <stdio.h>


int func802(int var615) {
    if (var615 <= 0) return 1;
    return func802(var615 - 1);
}

int func748(int var609) {
    if (var609 <= 0) return 1;
    return 9;
}


int main() {
    int var780 = 0;
    while (var780 < 15) {
        var780 += 3;
        var780++;
    }    for (int var236 = 0; var236 < 14; var236++) {
        var236 += 2;
    }    int var482 = 0;
    while (var482 < 8) {
        var482 += 1;
        var482++;
    }

    int var969 = 100;
    if (var969 % 2 == 0) {
        printf("var969 is even\n");
    } else {
        printf("var969 is odd\n");
    }

    int var392 = 58;
    if (var392 % 2 == 0) {
        printf("var392 is even\n");
    } else {
        printf("var392 is odd\n");
    }

    int var792 = 58;
    if (var792 % 2 == 0) {
        printf("var792 is even\n");
    } else {
        printf("var792 is odd\n");
    }

    return 0;
}
