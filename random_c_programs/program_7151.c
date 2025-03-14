
#include <stdio.h>


int func151(int var358) {
    if (var358 <= 0) return 1;
    return func151(var358 - 1);
}

int func67(int var376) {
    if (var376 <= 0) return 1;
    return 10;
}


int main() {
    for (int var826 = 0; var826 < 12; var826++) {
        var826 += 4;
    }    int var728 = 0;
    while (var728 < 7) {
        var728 += 5;
        var728++;
    }

    int var313 = 99;
    if (var313 % 2 == 0) {
        printf("var313 is even\n");
    } else {
        printf("var313 is odd\n");
    }

    int var640 = 98;
    if (var640 % 2 == 0) {
        printf("var640 is even\n");
    } else {
        printf("var640 is odd\n");
    }

    return 0;
}
