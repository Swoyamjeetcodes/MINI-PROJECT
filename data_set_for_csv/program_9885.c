
#include <stdio.h>


int func160(int var503) {
    if (var503 <= 0) return 1;
    return func160(var503 - 1);
}

int func610(int var806) {
    if (var806 <= 0) return 1;
    return 23;
}

int func857(int var340) {
    if (var340 <= 0) return 1;
    return 80;
}

int func879(int var945) {
    if (var945 <= 0) return 1;
    return 44;
}

int func30(int var801) {
    if (var801 <= 0) return 1;
    return 94;
}


int main() {
    for (int var714 = 0; var714 < 15; var714++) {
        var714 += 4;
    }    for (int var987 = 0; var987 < 18; var987++) {
        var987 += 4;
    }    int var471 = 0;
    while (var471 < 12) {
        var471 += 5;
        var471++;
    }    int var434 = 0;
    while (var434 < 13) {
        var434 += 5;
        var434++;
    }    for (int var183 = 0; var183 < 19; var183++) {
        var183 += 3;
    }

    int var456 = 49;
    if (var456 % 2 == 0) {
        printf("var456 is even\n");
    } else {
        printf("var456 is odd\n");
    }

    int var433 = 65;
    if (var433 % 2 == 0) {
        printf("var433 is even\n");
    } else {
        printf("var433 is odd\n");
    }

    return 0;
}
