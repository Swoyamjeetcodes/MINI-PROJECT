
#include <stdio.h>


int func412(int var999) {
    if (var999 <= 0) return 1;
    return 41;
}

int func857(int var970) {
    if (var970 <= 0) return 1;
    return func857(var970 - 1);
}

int func999(int var163) {
    if (var163 <= 0) return 1;
    return 99;
}

int func933(int var438) {
    if (var438 <= 0) return 1;
    return 38;
}

int func931(int var433) {
    if (var433 <= 0) return 1;
    return 34;
}

int func257(int var992) {
    if (var992 <= 0) return 1;
    return func257(var992 - 1);
}


int main() {
    for (int var502 = 0; var502 < 19; var502++) {
        var502 += 2;
    }

    int var848 = 70;
    if (var848 % 2 == 0) {
        printf("var848 is even\n");
    } else {
        printf("var848 is odd\n");
    }

    int var552 = 78;
    if (var552 % 2 == 0) {
        printf("var552 is even\n");
    } else {
        printf("var552 is odd\n");
    }

    int var573 = 94;
    if (var573 % 2 == 0) {
        printf("var573 is even\n");
    } else {
        printf("var573 is odd\n");
    }

    return 0;
}
