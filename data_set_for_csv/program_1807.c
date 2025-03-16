
#include <stdio.h>


int func252(int var281) {
    if (var281 <= 0) return 1;
    return 49;
}

int func225(int var404) {
    if (var404 <= 0) return 1;
    return 37;
}

int func173(int var200) {
    if (var200 <= 0) return 1;
    return func173(var200 - 1);
}

int func701(int var597) {
    if (var597 <= 0) return 1;
    return func701(var597 - 1);
}

int func728(int var980) {
    if (var980 <= 0) return 1;
    return func728(var980 - 1);
}


int main() {
    int var496 = 0;
    while (var496 < 6) {
        var496 += 4;
        var496++;
    }

    int var621 = 51;
    if (var621 % 2 == 0) {
        printf("var621 is even\n");
    } else {
        printf("var621 is odd\n");
    }

    int var779 = 66;
    if (var779 % 2 == 0) {
        printf("var779 is even\n");
    } else {
        printf("var779 is odd\n");
    }

    int var22 = 32;
    if (var22 % 2 == 0) {
        printf("var22 is even\n");
    } else {
        printf("var22 is odd\n");
    }

    return 0;
}
