
#include <stdio.h>


int func806(int var837) {
    if (var837 <= 0) return 1;
    return 25;
}

int func98(int var655) {
    if (var655 <= 0) return 1;
    return func98(var655 - 1);
}

int func86(int var112) {
    if (var112 <= 0) return 1;
    return func86(var112 - 1);
}

int func816(int var809) {
    if (var809 <= 0) return 1;
    return func816(var809 - 1);
}

int func782(int var510) {
    if (var510 <= 0) return 1;
    return 28;
}


int main() {
    int var759 = 0;
    while (var759 < 9) {
        var759 += 5;
        var759++;
    }    for (int var536 = 0; var536 < 16; var536++) {
        var536 += 4;
    }    for (int var51 = 0; var51 < 17; var51++) {
        var51 += 2;
    }

    int var917 = 82;
    if (var917 % 2 == 0) {
        printf("var917 is even\n");
    } else {
        printf("var917 is odd\n");
    }

    return 0;
}
