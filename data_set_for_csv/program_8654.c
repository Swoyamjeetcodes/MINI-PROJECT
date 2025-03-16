
#include <stdio.h>


int func744(int var8) {
    if (var8 <= 0) return 1;
    return func744(var8 - 1);
}


int main() {
    int var157 = 0;
    while (var157 < 11) {
        var157 += 4;
        var157++;
    }    for (int var482 = 0; var482 < 19; var482++) {
        var482 += 5;
    }

    int var576 = 66;
    if (var576 % 2 == 0) {
        printf("var576 is even\n");
    } else {
        printf("var576 is odd\n");
    }

    int var14 = 50;
    if (var14 % 2 == 0) {
        printf("var14 is even\n");
    } else {
        printf("var14 is odd\n");
    }

    int var336 = 29;
    if (var336 % 2 == 0) {
        printf("var336 is even\n");
    } else {
        printf("var336 is odd\n");
    }

    return 0;
}
