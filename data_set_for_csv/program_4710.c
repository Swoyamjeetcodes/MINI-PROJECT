
#include <stdio.h>


int func477(int var922) {
    if (var922 <= 0) return 1;
    return 80;
}

int func834(int var151) {
    if (var151 <= 0) return 1;
    return func834(var151 - 1);
}

int func754(int var239) {
    if (var239 <= 0) return 1;
    return 72;
}


int main() {
    int var960 = 0;
    while (var960 < 11) {
        var960 += 5;
        var960++;
    }    for (int var378 = 0; var378 < 6; var378++) {
        var378 += 1;
    }    int var282 = 0;
    while (var282 < 19) {
        var282 += 3;
        var282++;
    }

    int var412 = 29;
    if (var412 % 2 == 0) {
        printf("var412 is even\n");
    } else {
        printf("var412 is odd\n");
    }

    int var604 = 69;
    if (var604 % 2 == 0) {
        printf("var604 is even\n");
    } else {
        printf("var604 is odd\n");
    }

    return 0;
}
