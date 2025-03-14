
#include <stdio.h>


int func852(int var746) {
    if (var746 <= 0) return 1;
    return func852(var746 - 1);
}

int func929(int var317) {
    if (var317 <= 0) return 1;
    return func929(var317 - 1);
}


int main() {
    int var931 = 0;
    while (var931 < 20) {
        var931 += 4;
        var931++;
    }    for (int var384 = 0; var384 < 10; var384++) {
        var384 += 2;
    }    for (int var549 = 0; var549 < 19; var549++) {
        var549 += 2;
    }    int var359 = 0;
    while (var359 < 19) {
        var359 += 1;
        var359++;
    }

    int var280 = 23;
    if (var280 % 2 == 0) {
        printf("var280 is even\n");
    } else {
        printf("var280 is odd\n");
    }

    int var264 = 2;
    if (var264 % 2 == 0) {
        printf("var264 is even\n");
    } else {
        printf("var264 is odd\n");
    }

    int var159 = 77;
    if (var159 % 2 == 0) {
        printf("var159 is even\n");
    } else {
        printf("var159 is odd\n");
    }

    int var456 = 60;
    if (var456 % 2 == 0) {
        printf("var456 is even\n");
    } else {
        printf("var456 is odd\n");
    }

    int var381 = 94;
    if (var381 % 2 == 0) {
        printf("var381 is even\n");
    } else {
        printf("var381 is odd\n");
    }

    return 0;
}
