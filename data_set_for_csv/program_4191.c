
#include <stdio.h>


int func825(int var772) {
    if (var772 <= 0) return 1;
    return 68;
}

int func431(int var901) {
    if (var901 <= 0) return 1;
    return func431(var901 - 1);
}

int func5(int var420) {
    if (var420 <= 0) return 1;
    return func5(var420 - 1);
}


int main() {
    int var88 = 0;
    while (var88 < 16) {
        var88 += 3;
        var88++;
    }    int var780 = 0;
    while (var780 < 12) {
        var780 += 3;
        var780++;
    }

    int var848 = 11;
    if (var848 % 2 == 0) {
        printf("var848 is even\n");
    } else {
        printf("var848 is odd\n");
    }

    int var934 = 10;
    if (var934 % 2 == 0) {
        printf("var934 is even\n");
    } else {
        printf("var934 is odd\n");
    }

    int var174 = 14;
    if (var174 % 2 == 0) {
        printf("var174 is even\n");
    } else {
        printf("var174 is odd\n");
    }

    int var660 = 93;
    if (var660 % 2 == 0) {
        printf("var660 is even\n");
    } else {
        printf("var660 is odd\n");
    }

    return 0;
}
