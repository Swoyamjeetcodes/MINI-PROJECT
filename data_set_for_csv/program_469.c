
#include <stdio.h>


int func420(int var476) {
    if (var476 <= 0) return 1;
    return func420(var476 - 1);
}

int func780(int var845) {
    if (var845 <= 0) return 1;
    return 77;
}

int func735(int var883) {
    if (var883 <= 0) return 1;
    return func735(var883 - 1);
}


int main() {
    for (int var141 = 0; var141 < 17; var141++) {
        var141 += 4;
    }    int var839 = 0;
    while (var839 < 16) {
        var839 += 3;
        var839++;
    }    int var324 = 0;
    while (var324 < 18) {
        var324 += 3;
        var324++;
    }

    int var384 = 7;
    if (var384 % 2 == 0) {
        printf("var384 is even\n");
    } else {
        printf("var384 is odd\n");
    }

    int var673 = 7;
    if (var673 % 2 == 0) {
        printf("var673 is even\n");
    } else {
        printf("var673 is odd\n");
    }

    return 0;
}
