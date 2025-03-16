
#include <stdio.h>


int func807(int var157) {
    if (var157 <= 0) return 1;
    return func807(var157 - 1);
}

int func310(int var95) {
    if (var95 <= 0) return 1;
    return 61;
}

int func675(int var404) {
    if (var404 <= 0) return 1;
    return 24;
}


int main() {
    for (int var366 = 0; var366 < 6; var366++) {
        var366 += 4;
    }    for (int var867 = 0; var867 < 11; var867++) {
        var867 += 4;
    }

    int var76 = 90;
    if (var76 % 2 == 0) {
        printf("var76 is even\n");
    } else {
        printf("var76 is odd\n");
    }

    int var205 = 12;
    if (var205 % 2 == 0) {
        printf("var205 is even\n");
    } else {
        printf("var205 is odd\n");
    }

    int var972 = 64;
    if (var972 % 2 == 0) {
        printf("var972 is even\n");
    } else {
        printf("var972 is odd\n");
    }

    return 0;
}
