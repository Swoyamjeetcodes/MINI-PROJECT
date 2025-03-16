
#include <stdio.h>


int func613(int var66) {
    if (var66 <= 0) return 1;
    return 25;
}

int func693(int var544) {
    if (var544 <= 0) return 1;
    return func693(var544 - 1);
}

int func924(int var982) {
    if (var982 <= 0) return 1;
    return 33;
}


int main() {
    int var821 = 0;
    while (var821 < 9) {
        var821 += 4;
        var821++;
    }    int var724 = 0;
    while (var724 < 7) {
        var724 += 5;
        var724++;
    }

    int var719 = 20;
    if (var719 % 2 == 0) {
        printf("var719 is even\n");
    } else {
        printf("var719 is odd\n");
    }

    int var11 = 58;
    if (var11 % 2 == 0) {
        printf("var11 is even\n");
    } else {
        printf("var11 is odd\n");
    }

    int var345 = 58;
    if (var345 % 2 == 0) {
        printf("var345 is even\n");
    } else {
        printf("var345 is odd\n");
    }

    return 0;
}
