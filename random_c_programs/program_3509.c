
#include <stdio.h>


int func703(int var400) {
    if (var400 <= 0) return 1;
    return 53;
}

int func151(int var156) {
    if (var156 <= 0) return 1;
    return func151(var156 - 1);
}

int func549(int var291) {
    if (var291 <= 0) return 1;
    return 78;
}


int main() {
    int var822 = 0;
    while (var822 < 11) {
        var822 += 2;
        var822++;
    }    for (int var830 = 0; var830 < 19; var830++) {
        var830 += 3;
    }    int var829 = 0;
    while (var829 < 15) {
        var829 += 3;
        var829++;
    }    for (int var952 = 0; var952 < 16; var952++) {
        var952 += 3;
    }    int var200 = 0;
    while (var200 < 20) {
        var200 += 4;
        var200++;
    }

    int var502 = 25;
    if (var502 % 2 == 0) {
        printf("var502 is even\n");
    } else {
        printf("var502 is odd\n");
    }

    int var349 = 8;
    if (var349 % 2 == 0) {
        printf("var349 is even\n");
    } else {
        printf("var349 is odd\n");
    }

    int var805 = 69;
    if (var805 % 2 == 0) {
        printf("var805 is even\n");
    } else {
        printf("var805 is odd\n");
    }

    return 0;
}
