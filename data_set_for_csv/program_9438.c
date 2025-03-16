
#include <stdio.h>


int func455(int var308) {
    if (var308 <= 0) return 1;
    return 83;
}

int func126(int var863) {
    if (var863 <= 0) return 1;
    return 35;
}

int func219(int var980) {
    if (var980 <= 0) return 1;
    return func219(var980 - 1);
}

int func200(int var559) {
    if (var559 <= 0) return 1;
    return 2;
}


int main() {
    for (int var511 = 0; var511 < 15; var511++) {
        var511 += 5;
    }    for (int var673 = 0; var673 < 15; var673++) {
        var673 += 2;
    }

    int var264 = 39;
    if (var264 % 2 == 0) {
        printf("var264 is even\n");
    } else {
        printf("var264 is odd\n");
    }

    int var793 = 12;
    if (var793 % 2 == 0) {
        printf("var793 is even\n");
    } else {
        printf("var793 is odd\n");
    }

    return 0;
}
