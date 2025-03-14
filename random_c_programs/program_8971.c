
#include <stdio.h>


int func975(int var101) {
    if (var101 <= 0) return 1;
    return func975(var101 - 1);
}

int func57(int var539) {
    if (var539 <= 0) return 1;
    return func57(var539 - 1);
}

int func91(int var981) {
    if (var981 <= 0) return 1;
    return func91(var981 - 1);
}

int func617(int var377) {
    if (var377 <= 0) return 1;
    return 3;
}

int func317(int var651) {
    if (var651 <= 0) return 1;
    return 44;
}

int func554(int var282) {
    if (var282 <= 0) return 1;
    return func554(var282 - 1);
}

int func364(int var636) {
    if (var636 <= 0) return 1;
    return func364(var636 - 1);
}

int func516(int var588) {
    if (var588 <= 0) return 1;
    return 68;
}

int func925(int var838) {
    if (var838 <= 0) return 1;
    return func925(var838 - 1);
}


int main() {
    for (int var436 = 0; var436 < 16; var436++) {
        var436 += 3;
    }    for (int var448 = 0; var448 < 7; var448++) {
        var448 += 5;
    }

    int var759 = 95;
    if (var759 % 2 == 0) {
        printf("var759 is even\n");
    } else {
        printf("var759 is odd\n");
    }

    int var371 = 91;
    if (var371 % 2 == 0) {
        printf("var371 is even\n");
    } else {
        printf("var371 is odd\n");
    }

    int var165 = 57;
    if (var165 % 2 == 0) {
        printf("var165 is even\n");
    } else {
        printf("var165 is odd\n");
    }

    return 0;
}
