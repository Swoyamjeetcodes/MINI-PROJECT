
#include <stdio.h>


int func427(int var78) {
    if (var78 <= 0) return 1;
    return func427(var78 - 1);
}


int main() {
    for (int var131 = 0; var131 < 18; var131++) {
        var131 += 3;
    }    for (int var502 = 0; var502 < 20; var502++) {
        var502 += 2;
    }

    int var118 = 72;
    if (var118 % 2 == 0) {
        printf("var118 is even\n");
    } else {
        printf("var118 is odd\n");
    }

    int var871 = 54;
    if (var871 % 2 == 0) {
        printf("var871 is even\n");
    } else {
        printf("var871 is odd\n");
    }

    return 0;
}
