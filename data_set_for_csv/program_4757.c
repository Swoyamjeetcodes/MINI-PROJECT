
#include <stdio.h>


int func155(int var745) {
    if (var745 <= 0) return 1;
    return func155(var745 - 1);
}

int func371(int var97) {
    if (var97 <= 0) return 1;
    return func371(var97 - 1);
}

int func635(int var991) {
    if (var991 <= 0) return 1;
    return 5;
}


int main() {
    for (int var532 = 0; var532 < 14; var532++) {
        var532 += 5;
    }    int var655 = 0;
    while (var655 < 12) {
        var655 += 4;
        var655++;
    }    for (int var295 = 0; var295 < 17; var295++) {
        var295 += 1;
    }

    int var718 = 25;
    if (var718 % 2 == 0) {
        printf("var718 is even\n");
    } else {
        printf("var718 is odd\n");
    }

    int var216 = 41;
    if (var216 % 2 == 0) {
        printf("var216 is even\n");
    } else {
        printf("var216 is odd\n");
    }

    int var287 = 9;
    if (var287 % 2 == 0) {
        printf("var287 is even\n");
    } else {
        printf("var287 is odd\n");
    }

    int var27 = 38;
    if (var27 % 2 == 0) {
        printf("var27 is even\n");
    } else {
        printf("var27 is odd\n");
    }

    int var358 = 72;
    if (var358 % 2 == 0) {
        printf("var358 is even\n");
    } else {
        printf("var358 is odd\n");
    }

    return 0;
}
