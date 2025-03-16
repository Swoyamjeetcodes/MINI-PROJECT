
#include <stdio.h>


int func649(int var455) {
    if (var455 <= 0) return 1;
    return func649(var455 - 1);
}

int func139(int var579) {
    if (var579 <= 0) return 1;
    return 1;
}

int func213(int var266) {
    if (var266 <= 0) return 1;
    return 21;
}

int func542(int var326) {
    if (var326 <= 0) return 1;
    return 82;
}

int func877(int var777) {
    if (var777 <= 0) return 1;
    return func877(var777 - 1);
}


int main() {
    for (int var290 = 0; var290 < 20; var290++) {
        var290 += 3;
    }    int var369 = 0;
    while (var369 < 11) {
        var369 += 1;
        var369++;
    }    for (int var806 = 0; var806 < 6; var806++) {
        var806 += 4;
    }    int var109 = 0;
    while (var109 < 11) {
        var109 += 2;
        var109++;
    }    for (int var524 = 0; var524 < 12; var524++) {
        var524 += 1;
    }    for (int var943 = 0; var943 < 11; var943++) {
        var943 += 3;
    }    int var849 = 0;
    while (var849 < 13) {
        var849 += 1;
        var849++;
    }

    int var252 = 19;
    if (var252 % 2 == 0) {
        printf("var252 is even\n");
    } else {
        printf("var252 is odd\n");
    }

    return 0;
}
