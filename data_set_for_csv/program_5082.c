
#include <stdio.h>


int func888(int var420) {
    if (var420 <= 0) return 1;
    return 42;
}

int func606(int var473) {
    if (var473 <= 0) return 1;
    return func606(var473 - 1);
}

int func784(int var29) {
    if (var29 <= 0) return 1;
    return func784(var29 - 1);
}

int func137(int var889) {
    if (var889 <= 0) return 1;
    return func137(var889 - 1);
}

int func748(int var281) {
    if (var281 <= 0) return 1;
    return 18;
}


int main() {
    for (int var269 = 0; var269 < 19; var269++) {
        var269 += 4;
    }

    int var670 = 16;
    if (var670 % 2 == 0) {
        printf("var670 is even\n");
    } else {
        printf("var670 is odd\n");
    }

    int var141 = 86;
    if (var141 % 2 == 0) {
        printf("var141 is even\n");
    } else {
        printf("var141 is odd\n");
    }

    int var267 = 50;
    if (var267 % 2 == 0) {
        printf("var267 is even\n");
    } else {
        printf("var267 is odd\n");
    }

    return 0;
}
