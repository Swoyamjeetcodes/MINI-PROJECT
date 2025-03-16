
#include <stdio.h>


int func295(int var49) {
    if (var49 <= 0) return 1;
    return func295(var49 - 1);
}

int func303(int var848) {
    if (var848 <= 0) return 1;
    return 5;
}

int func339(int var420) {
    if (var420 <= 0) return 1;
    return func339(var420 - 1);
}


int main() {
    for (int var424 = 0; var424 < 20; var424++) {
        var424 += 4;
    }    int var300 = 0;
    while (var300 < 20) {
        var300 += 1;
        var300++;
    }

    int var883 = 2;
    if (var883 % 2 == 0) {
        printf("var883 is even\n");
    } else {
        printf("var883 is odd\n");
    }

    int var800 = 44;
    if (var800 % 2 == 0) {
        printf("var800 is even\n");
    } else {
        printf("var800 is odd\n");
    }

    return 0;
}
