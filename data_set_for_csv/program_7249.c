
#include <stdio.h>


int func733(int var577) {
    if (var577 <= 0) return 1;
    return func733(var577 - 1);
}


int main() {
    for (int var453 = 0; var453 < 9; var453++) {
        var453 += 3;
    }

    int var138 = 46;
    if (var138 % 2 == 0) {
        printf("var138 is even\n");
    } else {
        printf("var138 is odd\n");
    }

    int var570 = 97;
    if (var570 % 2 == 0) {
        printf("var570 is even\n");
    } else {
        printf("var570 is odd\n");
    }

    int var893 = 14;
    if (var893 % 2 == 0) {
        printf("var893 is even\n");
    } else {
        printf("var893 is odd\n");
    }

    return 0;
}
