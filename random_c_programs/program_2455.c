
#include <stdio.h>


int func570(int var765) {
    if (var765 <= 0) return 1;
    return 50;
}

int func197(int var449) {
    if (var449 <= 0) return 1;
    return func197(var449 - 1);
}


int main() {
    int var25 = 0;
    while (var25 < 13) {
        var25 += 2;
        var25++;
    }

    int var35 = 38;
    if (var35 % 2 == 0) {
        printf("var35 is even\n");
    } else {
        printf("var35 is odd\n");
    }

    int var341 = 100;
    if (var341 % 2 == 0) {
        printf("var341 is even\n");
    } else {
        printf("var341 is odd\n");
    }

    return 0;
}
