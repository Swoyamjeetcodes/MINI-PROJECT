
#include <stdio.h>


int func148(int var229) {
    if (var229 <= 0) return 1;
    return 59;
}

int func487(int var762) {
    if (var762 <= 0) return 1;
    return func487(var762 - 1);
}

int func412(int var538) {
    if (var538 <= 0) return 1;
    return 20;
}


int main() {
    for (int var592 = 0; var592 < 6; var592++) {
        var592 += 5;
    }    for (int var475 = 0; var475 < 20; var475++) {
        var475 += 4;
    }

    int var374 = 6;
    if (var374 % 2 == 0) {
        printf("var374 is even\n");
    } else {
        printf("var374 is odd\n");
    }

    int var761 = 71;
    if (var761 % 2 == 0) {
        printf("var761 is even\n");
    } else {
        printf("var761 is odd\n");
    }

    int var598 = 90;
    if (var598 % 2 == 0) {
        printf("var598 is even\n");
    } else {
        printf("var598 is odd\n");
    }

    return 0;
}
