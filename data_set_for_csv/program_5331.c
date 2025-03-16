
#include <stdio.h>


int func279(int var291) {
    if (var291 <= 0) return 1;
    return func279(var291 - 1);
}

int func541(int var932) {
    if (var932 <= 0) return 1;
    return 50;
}

int func738(int var750) {
    if (var750 <= 0) return 1;
    return 71;
}

int func792(int var9) {
    if (var9 <= 0) return 1;
    return func792(var9 - 1);
}

int func697(int var223) {
    if (var223 <= 0) return 1;
    return func697(var223 - 1);
}

int func499(int var581) {
    if (var581 <= 0) return 1;
    return func499(var581 - 1);
}

int func659(int var192) {
    if (var192 <= 0) return 1;
    return func659(var192 - 1);
}


int main() {
    for (int var11 = 0; var11 < 12; var11++) {
        var11 += 5;
    }    int var472 = 0;
    while (var472 < 12) {
        var472 += 5;
        var472++;
    }    for (int var962 = 0; var962 < 18; var962++) {
        var962 += 3;
    }    int var267 = 0;
    while (var267 < 12) {
        var267 += 1;
        var267++;
    }    int var887 = 0;
    while (var887 < 19) {
        var887 += 3;
        var887++;
    }    int var388 = 0;
    while (var388 < 5) {
        var388 += 3;
        var388++;
    }

    int var302 = 70;
    if (var302 % 2 == 0) {
        printf("var302 is even\n");
    } else {
        printf("var302 is odd\n");
    }

    int var56 = 62;
    if (var56 % 2 == 0) {
        printf("var56 is even\n");
    } else {
        printf("var56 is odd\n");
    }

    int var386 = 13;
    if (var386 % 2 == 0) {
        printf("var386 is even\n");
    } else {
        printf("var386 is odd\n");
    }

    return 0;
}
