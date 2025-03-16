
#include <stdio.h>


int func823(int var509) {
    if (var509 <= 0) return 1;
    return func823(var509 - 1);
}

int func900(int var436) {
    if (var436 <= 0) return 1;
    return 59;
}


int main() {
    int var797 = 0;
    while (var797 < 9) {
        var797 += 2;
        var797++;
    }    for (int var632 = 0; var632 < 7; var632++) {
        var632 += 2;
    }    int var883 = 0;
    while (var883 < 17) {
        var883 += 3;
        var883++;
    }

    int var655 = 48;
    if (var655 % 2 == 0) {
        printf("var655 is even\n");
    } else {
        printf("var655 is odd\n");
    }

    int var100 = 20;
    if (var100 % 2 == 0) {
        printf("var100 is even\n");
    } else {
        printf("var100 is odd\n");
    }

    int var544 = 56;
    if (var544 % 2 == 0) {
        printf("var544 is even\n");
    } else {
        printf("var544 is odd\n");
    }

    return 0;
}
