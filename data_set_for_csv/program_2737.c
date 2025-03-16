
#include <stdio.h>


int func435(int var691) {
    if (var691 <= 0) return 1;
    return func435(var691 - 1);
}

int func540(int var338) {
    if (var338 <= 0) return 1;
    return 100;
}


int main() {
    for (int var313 = 0; var313 < 6; var313++) {
        var313 += 3;
    }

    int var693 = 25;
    if (var693 % 2 == 0) {
        printf("var693 is even\n");
    } else {
        printf("var693 is odd\n");
    }

    int var225 = 1;
    if (var225 % 2 == 0) {
        printf("var225 is even\n");
    } else {
        printf("var225 is odd\n");
    }

    int var4 = 14;
    if (var4 % 2 == 0) {
        printf("var4 is even\n");
    } else {
        printf("var4 is odd\n");
    }

    return 0;
}
