
#include <stdio.h>


int func879(int var883) {
    if (var883 <= 0) return 1;
    return func879(var883 - 1);
}


int main() {
    int var141 = 0;
    while (var141 < 19) {
        var141 += 4;
        var141++;
    }    for (int var511 = 0; var511 < 15; var511++) {
        var511 += 4;
    }    int var4 = 0;
    while (var4 < 10) {
        var4 += 3;
        var4++;
    }

    int var963 = 90;
    if (var963 % 2 == 0) {
        printf("var963 is even\n");
    } else {
        printf("var963 is odd\n");
    }

    int var351 = 34;
    if (var351 % 2 == 0) {
        printf("var351 is even\n");
    } else {
        printf("var351 is odd\n");
    }

    int var675 = 92;
    if (var675 % 2 == 0) {
        printf("var675 is even\n");
    } else {
        printf("var675 is odd\n");
    }

    return 0;
}
