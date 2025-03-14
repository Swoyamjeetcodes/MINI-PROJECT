
#include <stdio.h>


int func916(int var239) {
    if (var239 <= 0) return 1;
    return func916(var239 - 1);
}

int func592(int var439) {
    if (var439 <= 0) return 1;
    return 70;
}

int func218(int var994) {
    if (var994 <= 0) return 1;
    return 66;
}


int main() {
    for (int var379 = 0; var379 < 10; var379++) {
        var379 += 2;
    }

    int var184 = 6;
    if (var184 % 2 == 0) {
        printf("var184 is even\n");
    } else {
        printf("var184 is odd\n");
    }

    int var487 = 38;
    if (var487 % 2 == 0) {
        printf("var487 is even\n");
    } else {
        printf("var487 is odd\n");
    }

    int var598 = 4;
    if (var598 % 2 == 0) {
        printf("var598 is even\n");
    } else {
        printf("var598 is odd\n");
    }

    return 0;
}
