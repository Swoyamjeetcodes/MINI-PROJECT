
#include <stdio.h>


int func523(int var479) {
    if (var479 <= 0) return 1;
    return 17;
}

int func894(int var131) {
    if (var131 <= 0) return 1;
    return func894(var131 - 1);
}


int main() {
    int var179 = 0;
    while (var179 < 18) {
        var179 += 3;
        var179++;
    }    for (int var122 = 0; var122 < 16; var122++) {
        var122 += 4;
    }

    int var894 = 23;
    if (var894 % 2 == 0) {
        printf("var894 is even\n");
    } else {
        printf("var894 is odd\n");
    }

    int var436 = 63;
    if (var436 % 2 == 0) {
        printf("var436 is even\n");
    } else {
        printf("var436 is odd\n");
    }

    int var20 = 21;
    if (var20 % 2 == 0) {
        printf("var20 is even\n");
    } else {
        printf("var20 is odd\n");
    }

    return 0;
}
