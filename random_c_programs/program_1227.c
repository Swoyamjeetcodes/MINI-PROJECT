
#include <stdio.h>


int func272(int var904) {
    if (var904 <= 0) return 1;
    return 50;
}

int func538(int var912) {
    if (var912 <= 0) return 1;
    return func538(var912 - 1);
}


int main() {
    int var773 = 0;
    while (var773 < 20) {
        var773 += 4;
        var773++;
    }

    int var340 = 58;
    if (var340 % 2 == 0) {
        printf("var340 is even\n");
    } else {
        printf("var340 is odd\n");
    }

    int var410 = 2;
    if (var410 % 2 == 0) {
        printf("var410 is even\n");
    } else {
        printf("var410 is odd\n");
    }

    int var647 = 86;
    if (var647 % 2 == 0) {
        printf("var647 is even\n");
    } else {
        printf("var647 is odd\n");
    }

    int var202 = 43;
    if (var202 % 2 == 0) {
        printf("var202 is even\n");
    } else {
        printf("var202 is odd\n");
    }

    return 0;
}
