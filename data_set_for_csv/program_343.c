
#include <stdio.h>


int func3(int var602) {
    if (var602 <= 0) return 1;
    return func3(var602 - 1);
}

int func89(int var541) {
    if (var541 <= 0) return 1;
    return 91;
}

int func267(int var692) {
    if (var692 <= 0) return 1;
    return func267(var692 - 1);
}


int main() {
    int var453 = 0;
    while (var453 < 14) {
        var453 += 2;
        var453++;
    }

    int var340 = 14;
    if (var340 % 2 == 0) {
        printf("var340 is even\n");
    } else {
        printf("var340 is odd\n");
    }

    int var167 = 93;
    if (var167 % 2 == 0) {
        printf("var167 is even\n");
    } else {
        printf("var167 is odd\n");
    }

    int var521 = 74;
    if (var521 % 2 == 0) {
        printf("var521 is even\n");
    } else {
        printf("var521 is odd\n");
    }

    return 0;
}
