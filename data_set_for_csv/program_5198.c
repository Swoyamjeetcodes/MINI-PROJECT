
#include <stdio.h>


int func566(int var415) {
    if (var415 <= 0) return 1;
    return func566(var415 - 1);
}


int main() {
    int var882 = 0;
    while (var882 < 20) {
        var882 += 3;
        var882++;
    }

    int var452 = 3;
    if (var452 % 2 == 0) {
        printf("var452 is even\n");
    } else {
        printf("var452 is odd\n");
    }

    int var363 = 100;
    if (var363 % 2 == 0) {
        printf("var363 is even\n");
    } else {
        printf("var363 is odd\n");
    }

    int var204 = 2;
    if (var204 % 2 == 0) {
        printf("var204 is even\n");
    } else {
        printf("var204 is odd\n");
    }

    return 0;
}
