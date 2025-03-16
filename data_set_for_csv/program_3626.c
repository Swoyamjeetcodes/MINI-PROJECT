
#include <stdio.h>


int func465(int var808) {
    if (var808 <= 0) return 1;
    return 6;
}

int func689(int var806) {
    if (var806 <= 0) return 1;
    return 17;
}

int func329(int var98) {
    if (var98 <= 0) return 1;
    return 16;
}

int func80(int var421) {
    if (var421 <= 0) return 1;
    return func80(var421 - 1);
}

int func269(int var856) {
    if (var856 <= 0) return 1;
    return func269(var856 - 1);
}


int main() {
    for (int var635 = 0; var635 < 13; var635++) {
        var635 += 3;
    }    int var7 = 0;
    while (var7 < 6) {
        var7 += 2;
        var7++;
    }    for (int var946 = 0; var946 < 17; var946++) {
        var946 += 1;
    }    for (int var506 = 0; var506 < 8; var506++) {
        var506 += 2;
    }    int var721 = 0;
    while (var721 < 10) {
        var721 += 2;
        var721++;
    }    int var520 = 0;
    while (var520 < 11) {
        var520 += 4;
        var520++;
    }    int var204 = 0;
    while (var204 < 13) {
        var204 += 2;
        var204++;
    }

    int var479 = 62;
    if (var479 % 2 == 0) {
        printf("var479 is even\n");
    } else {
        printf("var479 is odd\n");
    }

    int var564 = 82;
    if (var564 % 2 == 0) {
        printf("var564 is even\n");
    } else {
        printf("var564 is odd\n");
    }

    return 0;
}
