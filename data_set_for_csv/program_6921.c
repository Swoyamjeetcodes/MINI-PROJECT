
#include <stdio.h>


int func415(int var647) {
    if (var647 <= 0) return 1;
    return 4;
}

int func850(int var141) {
    if (var141 <= 0) return 1;
    return 11;
}

int func965(int var762) {
    if (var762 <= 0) return 1;
    return func965(var762 - 1);
}


int main() {
    int var633 = 0;
    while (var633 < 19) {
        var633 += 1;
        var633++;
    }    int var895 = 0;
    while (var895 < 8) {
        var895 += 1;
        var895++;
    }

    int var165 = 25;
    if (var165 % 2 == 0) {
        printf("var165 is even\n");
    } else {
        printf("var165 is odd\n");
    }

    int var396 = 10;
    if (var396 % 2 == 0) {
        printf("var396 is even\n");
    } else {
        printf("var396 is odd\n");
    }

    int var691 = 63;
    if (var691 % 2 == 0) {
        printf("var691 is even\n");
    } else {
        printf("var691 is odd\n");
    }

    return 0;
}
