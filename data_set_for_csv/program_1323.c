
#include <stdio.h>


int func506(int var493) {
    if (var493 <= 0) return 1;
    return func506(var493 - 1);
}

int func368(int var579) {
    if (var579 <= 0) return 1;
    return func368(var579 - 1);
}


int main() {
    for (int var856 = 0; var856 < 15; var856++) {
        var856 += 3;
    }    for (int var474 = 0; var474 < 19; var474++) {
        var474 += 2;
    }    for (int var365 = 0; var365 < 18; var365++) {
        var365 += 1;
    }    int var120 = 0;
    while (var120 < 8) {
        var120 += 3;
        var120++;
    }    int var965 = 0;
    while (var965 < 13) {
        var965 += 3;
        var965++;
    }    int var291 = 0;
    while (var291 < 10) {
        var291 += 5;
        var291++;
    }    int var225 = 0;
    while (var225 < 6) {
        var225 += 4;
        var225++;
    }

    int var400 = 16;
    if (var400 % 2 == 0) {
        printf("var400 is even\n");
    } else {
        printf("var400 is odd\n");
    }

    int var559 = 5;
    if (var559 % 2 == 0) {
        printf("var559 is even\n");
    } else {
        printf("var559 is odd\n");
    }

    int var615 = 14;
    if (var615 % 2 == 0) {
        printf("var615 is even\n");
    } else {
        printf("var615 is odd\n");
    }

    int var61 = 82;
    if (var61 % 2 == 0) {
        printf("var61 is even\n");
    } else {
        printf("var61 is odd\n");
    }

    return 0;
}
