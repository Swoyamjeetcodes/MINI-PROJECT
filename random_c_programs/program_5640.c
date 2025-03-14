
#include <stdio.h>


int func270(int var575) {
    if (var575 <= 0) return 1;
    return func270(var575 - 1);
}

int func335(int var684) {
    if (var684 <= 0) return 1;
    return 81;
}


int main() {
    int var226 = 0;
    while (var226 < 14) {
        var226 += 3;
        var226++;
    }

    int var47 = 55;
    if (var47 % 2 == 0) {
        printf("var47 is even\n");
    } else {
        printf("var47 is odd\n");
    }

    int var410 = 30;
    if (var410 % 2 == 0) {
        printf("var410 is even\n");
    } else {
        printf("var410 is odd\n");
    }

    return 0;
}
