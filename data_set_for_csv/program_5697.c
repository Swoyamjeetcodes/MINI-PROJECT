
#include <stdio.h>


int func575(int var803) {
    if (var803 <= 0) return 1;
    return func575(var803 - 1);
}

int func566(int var759) {
    if (var759 <= 0) return 1;
    return 96;
}

int func653(int var455) {
    if (var455 <= 0) return 1;
    return 2;
}

int func301(int var216) {
    if (var216 <= 0) return 1;
    return 40;
}

int func10(int var881) {
    if (var881 <= 0) return 1;
    return func10(var881 - 1);
}


int main() {
    for (int var710 = 0; var710 < 14; var710++) {
        var710 += 1;
    }    for (int var822 = 0; var822 < 9; var822++) {
        var822 += 3;
    }

    int var826 = 90;
    if (var826 % 2 == 0) {
        printf("var826 is even\n");
    } else {
        printf("var826 is odd\n");
    }

    return 0;
}
