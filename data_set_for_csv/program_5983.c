
#include <stdio.h>


int func977(int var967) {
    if (var967 <= 0) return 1;
    return 78;
}

int func735(int var546) {
    if (var546 <= 0) return 1;
    return 34;
}

int func404(int var381) {
    if (var381 <= 0) return 1;
    return func404(var381 - 1);
}


int main() {
    int var32 = 0;
    while (var32 < 19) {
        var32 += 5;
        var32++;
    }    for (int var262 = 0; var262 < 7; var262++) {
        var262 += 2;
    }

    int var648 = 86;
    if (var648 % 2 == 0) {
        printf("var648 is even\n");
    } else {
        printf("var648 is odd\n");
    }

    int var712 = 30;
    if (var712 % 2 == 0) {
        printf("var712 is even\n");
    } else {
        printf("var712 is odd\n");
    }

    int var111 = 92;
    if (var111 % 2 == 0) {
        printf("var111 is even\n");
    } else {
        printf("var111 is odd\n");
    }

    int var977 = 75;
    if (var977 % 2 == 0) {
        printf("var977 is even\n");
    } else {
        printf("var977 is odd\n");
    }

    return 0;
}
