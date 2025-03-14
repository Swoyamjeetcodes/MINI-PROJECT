
#include <stdio.h>


int func295(int var617) {
    if (var617 <= 0) return 1;
    return 99;
}

int func324(int var396) {
    if (var396 <= 0) return 1;
    return func324(var396 - 1);
}

int func515(int var682) {
    if (var682 <= 0) return 1;
    return func515(var682 - 1);
}

int func725(int var306) {
    if (var306 <= 0) return 1;
    return 58;
}

int func627(int var352) {
    if (var352 <= 0) return 1;
    return func627(var352 - 1);
}


int main() {
    for (int var371 = 0; var371 < 16; var371++) {
        var371 += 5;
    }    for (int var630 = 0; var630 < 16; var630++) {
        var630 += 5;
    }

    int var185 = 32;
    if (var185 % 2 == 0) {
        printf("var185 is even\n");
    } else {
        printf("var185 is odd\n");
    }

    return 0;
}
