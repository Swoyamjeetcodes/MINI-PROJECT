
#include <stdio.h>


int func276(int var577) {
    if (var577 <= 0) return 1;
    return func276(var577 - 1);
}

int func980(int var202) {
    if (var202 <= 0) return 1;
    return 68;
}

int func724(int var166) {
    if (var166 <= 0) return 1;
    return 22;
}

int func402(int var660) {
    if (var660 <= 0) return 1;
    return func402(var660 - 1);
}


int main() {
    for (int var565 = 0; var565 < 13; var565++) {
        var565 += 4;
    }    int var897 = 0;
    while (var897 < 11) {
        var897 += 2;
        var897++;
    }

    int var479 = 30;
    if (var479 % 2 == 0) {
        printf("var479 is even\n");
    } else {
        printf("var479 is odd\n");
    }

    int var440 = 76;
    if (var440 % 2 == 0) {
        printf("var440 is even\n");
    } else {
        printf("var440 is odd\n");
    }

    int var171 = 50;
    if (var171 % 2 == 0) {
        printf("var171 is even\n");
    } else {
        printf("var171 is odd\n");
    }

    return 0;
}
