
#include <stdio.h>


int func148(int var914) {
    if (var914 <= 0) return 1;
    return 99;
}

int func134(int var713) {
    if (var713 <= 0) return 1;
    return 87;
}

int func284(int var718) {
    if (var718 <= 0) return 1;
    return func284(var718 - 1);
}

int func327(int var319) {
    if (var319 <= 0) return 1;
    return func327(var319 - 1);
}


int main() {
    int var355 = 0;
    while (var355 < 15) {
        var355 += 2;
        var355++;
    }    for (int var823 = 0; var823 < 18; var823++) {
        var823 += 5;
    }

    int var671 = 37;
    if (var671 % 2 == 0) {
        printf("var671 is even\n");
    } else {
        printf("var671 is odd\n");
    }

    int var174 = 24;
    if (var174 % 2 == 0) {
        printf("var174 is even\n");
    } else {
        printf("var174 is odd\n");
    }

    int var493 = 30;
    if (var493 % 2 == 0) {
        printf("var493 is even\n");
    } else {
        printf("var493 is odd\n");
    }

    int var475 = 7;
    if (var475 % 2 == 0) {
        printf("var475 is even\n");
    } else {
        printf("var475 is odd\n");
    }

    int var35 = 49;
    if (var35 % 2 == 0) {
        printf("var35 is even\n");
    } else {
        printf("var35 is odd\n");
    }

    return 0;
}
