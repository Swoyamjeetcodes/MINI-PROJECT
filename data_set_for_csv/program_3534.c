
#include <stdio.h>


int func203(int var588) {
    if (var588 <= 0) return 1;
    return 51;
}

int func356(int var70) {
    if (var70 <= 0) return 1;
    return 23;
}

int func264(int var268) {
    if (var268 <= 0) return 1;
    return func264(var268 - 1);
}


int main() {
    int var561 = 0;
    while (var561 < 7) {
        var561 += 5;
        var561++;
    }

    int var892 = 59;
    if (var892 % 2 == 0) {
        printf("var892 is even\n");
    } else {
        printf("var892 is odd\n");
    }

    int var77 = 33;
    if (var77 % 2 == 0) {
        printf("var77 is even\n");
    } else {
        printf("var77 is odd\n");
    }

    int var290 = 6;
    if (var290 % 2 == 0) {
        printf("var290 is even\n");
    } else {
        printf("var290 is odd\n");
    }

    return 0;
}
