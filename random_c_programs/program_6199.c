
#include <stdio.h>


int func520(int var647) {
    if (var647 <= 0) return 1;
    return func520(var647 - 1);
}

int func873(int var48) {
    if (var48 <= 0) return 1;
    return 32;
}

int func264(int var514) {
    if (var514 <= 0) return 1;
    return 55;
}

int func998(int var404) {
    if (var404 <= 0) return 1;
    return 55;
}


int main() {
    int var572 = 0;
    while (var572 < 10) {
        var572 += 4;
        var572++;
    }    for (int var232 = 0; var232 < 14; var232++) {
        var232 += 4;
    }    for (int var744 = 0; var744 < 12; var744++) {
        var744 += 1;
    }

    int var419 = 98;
    if (var419 % 2 == 0) {
        printf("var419 is even\n");
    } else {
        printf("var419 is odd\n");
    }

    int var389 = 38;
    if (var389 % 2 == 0) {
        printf("var389 is even\n");
    } else {
        printf("var389 is odd\n");
    }

    int var308 = 89;
    if (var308 % 2 == 0) {
        printf("var308 is even\n");
    } else {
        printf("var308 is odd\n");
    }

    return 0;
}
