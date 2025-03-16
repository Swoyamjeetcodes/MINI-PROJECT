
#include <stdio.h>


int func274(int var760) {
    if (var760 <= 0) return 1;
    return func274(var760 - 1);
}


int main() {
    int var123 = 0;
    while (var123 < 15) {
        var123 += 1;
        var123++;
    }

    int var717 = 78;
    if (var717 % 2 == 0) {
        printf("var717 is even\n");
    } else {
        printf("var717 is odd\n");
    }

    int var18 = 14;
    if (var18 % 2 == 0) {
        printf("var18 is even\n");
    } else {
        printf("var18 is odd\n");
    }

    int var581 = 95;
    if (var581 % 2 == 0) {
        printf("var581 is even\n");
    } else {
        printf("var581 is odd\n");
    }

    return 0;
}
