
#include <stdio.h>


int func36(int var504) {
    if (var504 <= 0) return 1;
    return func36(var504 - 1);
}

int func673(int var791) {
    if (var791 <= 0) return 1;
    return 23;
}

int func897(int var337) {
    if (var337 <= 0) return 1;
    return 27;
}


int main() {
    int var360 = 0;
    while (var360 < 13) {
        var360 += 3;
        var360++;
    }

    int var452 = 33;
    if (var452 % 2 == 0) {
        printf("var452 is even\n");
    } else {
        printf("var452 is odd\n");
    }

    int var250 = 10;
    if (var250 % 2 == 0) {
        printf("var250 is even\n");
    } else {
        printf("var250 is odd\n");
    }

    int var591 = 15;
    if (var591 % 2 == 0) {
        printf("var591 is even\n");
    } else {
        printf("var591 is odd\n");
    }

    return 0;
}
