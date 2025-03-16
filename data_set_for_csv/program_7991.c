
#include <stdio.h>


int func216(int var597) {
    if (var597 <= 0) return 1;
    return func216(var597 - 1);
}

int func764(int var751) {
    if (var751 <= 0) return 1;
    return func764(var751 - 1);
}


int main() {
    for (int var230 = 0; var230 < 10; var230++) {
        var230 += 2;
    }    int var534 = 0;
    while (var534 < 5) {
        var534 += 3;
        var534++;
    }

    int var718 = 17;
    if (var718 % 2 == 0) {
        printf("var718 is even\n");
    } else {
        printf("var718 is odd\n");
    }

    int var591 = 29;
    if (var591 % 2 == 0) {
        printf("var591 is even\n");
    } else {
        printf("var591 is odd\n");
    }

    int var334 = 84;
    if (var334 % 2 == 0) {
        printf("var334 is even\n");
    } else {
        printf("var334 is odd\n");
    }

    return 0;
}
