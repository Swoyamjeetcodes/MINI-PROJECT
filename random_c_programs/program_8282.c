
#include <stdio.h>


int func982(int var492) {
    if (var492 <= 0) return 1;
    return 6;
}

int func351(int var41) {
    if (var41 <= 0) return 1;
    return func351(var41 - 1);
}

int func752(int var692) {
    if (var692 <= 0) return 1;
    return 87;
}


int main() {
    int var760 = 0;
    while (var760 < 14) {
        var760 += 4;
        var760++;
    }

    int var472 = 5;
    if (var472 % 2 == 0) {
        printf("var472 is even\n");
    } else {
        printf("var472 is odd\n");
    }

    int var2 = 49;
    if (var2 % 2 == 0) {
        printf("var2 is even\n");
    } else {
        printf("var2 is odd\n");
    }

    int var127 = 99;
    if (var127 % 2 == 0) {
        printf("var127 is even\n");
    } else {
        printf("var127 is odd\n");
    }

    return 0;
}
