
#include <stdio.h>


int func851(int var762) {
    if (var762 <= 0) return 1;
    return func851(var762 - 1);
}

int func758(int var851) {
    if (var851 <= 0) return 1;
    return 53;
}


int main() {
    for (int var397 = 0; var397 < 10; var397++) {
        var397 += 3;
    }    int var231 = 0;
    while (var231 < 20) {
        var231 += 2;
        var231++;
    }    int var144 = 0;
    while (var144 < 15) {
        var144 += 5;
        var144++;
    }

    int var463 = 39;
    if (var463 % 2 == 0) {
        printf("var463 is even\n");
    } else {
        printf("var463 is odd\n");
    }

    int var714 = 97;
    if (var714 % 2 == 0) {
        printf("var714 is even\n");
    } else {
        printf("var714 is odd\n");
    }

    int var99 = 25;
    if (var99 % 2 == 0) {
        printf("var99 is even\n");
    } else {
        printf("var99 is odd\n");
    }

    return 0;
}
