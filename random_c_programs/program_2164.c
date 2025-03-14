
#include <stdio.h>


int func789(int var590) {
    if (var590 <= 0) return 1;
    return 23;
}

int func363(int var874) {
    if (var874 <= 0) return 1;
    return func363(var874 - 1);
}

int func456(int var719) {
    if (var719 <= 0) return 1;
    return func456(var719 - 1);
}

int func990(int var18) {
    if (var18 <= 0) return 1;
    return 5;
}


int main() {
    for (int var746 = 0; var746 < 18; var746++) {
        var746 += 1;
    }    int var482 = 0;
    while (var482 < 7) {
        var482 += 2;
        var482++;
    }    for (int var348 = 0; var348 < 20; var348++) {
        var348 += 3;
    }

    int var462 = 2;
    if (var462 % 2 == 0) {
        printf("var462 is even\n");
    } else {
        printf("var462 is odd\n");
    }

    return 0;
}
