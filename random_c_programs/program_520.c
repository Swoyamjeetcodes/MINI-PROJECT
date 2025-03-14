
#include <stdio.h>


int func775(int var142) {
    if (var142 <= 0) return 1;
    return 14;
}

int func188(int var811) {
    if (var811 <= 0) return 1;
    return 98;
}

int func838(int var655) {
    if (var655 <= 0) return 1;
    return func838(var655 - 1);
}

int func940(int var136) {
    if (var136 <= 0) return 1;
    return func940(var136 - 1);
}

int func859(int var38) {
    if (var38 <= 0) return 1;
    return 62;
}


int main() {
    for (int var871 = 0; var871 < 16; var871++) {
        var871 += 3;
    }    int var627 = 0;
    while (var627 < 7) {
        var627 += 2;
        var627++;
    }    int var657 = 0;
    while (var657 < 10) {
        var657 += 3;
        var657++;
    }

    int var893 = 26;
    if (var893 % 2 == 0) {
        printf("var893 is even\n");
    } else {
        printf("var893 is odd\n");
    }

    int var330 = 43;
    if (var330 % 2 == 0) {
        printf("var330 is even\n");
    } else {
        printf("var330 is odd\n");
    }

    int var217 = 60;
    if (var217 % 2 == 0) {
        printf("var217 is even\n");
    } else {
        printf("var217 is odd\n");
    }

    return 0;
}
