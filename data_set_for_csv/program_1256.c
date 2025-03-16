
#include <stdio.h>


int func180(int var719) {
    if (var719 <= 0) return 1;
    return func180(var719 - 1);
}

int func581(int var182) {
    if (var182 <= 0) return 1;
    return func581(var182 - 1);
}

int func707(int var683) {
    if (var683 <= 0) return 1;
    return func707(var683 - 1);
}

int func526(int var655) {
    if (var655 <= 0) return 1;
    return func526(var655 - 1);
}

int func60(int var288) {
    if (var288 <= 0) return 1;
    return func60(var288 - 1);
}


int main() {
    for (int var818 = 0; var818 < 6; var818++) {
        var818 += 3;
    }    int var933 = 0;
    while (var933 < 7) {
        var933 += 5;
        var933++;
    }    for (int var154 = 0; var154 < 13; var154++) {
        var154 += 5;
    }

    int var511 = 15;
    if (var511 % 2 == 0) {
        printf("var511 is even\n");
    } else {
        printf("var511 is odd\n");
    }

    return 0;
}
