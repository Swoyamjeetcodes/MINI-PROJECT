
#include <stdio.h>


int func364(int var630) {
    if (var630 <= 0) return 1;
    return func364(var630 - 1);
}

int func715(int var271) {
    if (var271 <= 0) return 1;
    return 67;
}

int func781(int var626) {
    if (var626 <= 0) return 1;
    return 43;
}

int func897(int var403) {
    if (var403 <= 0) return 1;
    return func897(var403 - 1);
}


int main() {
    for (int var132 = 0; var132 < 18; var132++) {
        var132 += 4;
    }    int var769 = 0;
    while (var769 < 14) {
        var769 += 1;
        var769++;
    }

    int var990 = 99;
    if (var990 % 2 == 0) {
        printf("var990 is even\n");
    } else {
        printf("var990 is odd\n");
    }

    int var682 = 98;
    if (var682 % 2 == 0) {
        printf("var682 is even\n");
    } else {
        printf("var682 is odd\n");
    }

    int var983 = 97;
    if (var983 % 2 == 0) {
        printf("var983 is even\n");
    } else {
        printf("var983 is odd\n");
    }

    return 0;
}
