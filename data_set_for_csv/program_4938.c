
#include <stdio.h>


int func620(int var795) {
    if (var795 <= 0) return 1;
    return func620(var795 - 1);
}

int func983(int var891) {
    if (var891 <= 0) return 1;
    return 65;
}

int func827(int var274) {
    if (var274 <= 0) return 1;
    return func827(var274 - 1);
}

int func153(int var875) {
    if (var875 <= 0) return 1;
    return 41;
}


int main() {
    for (int var769 = 0; var769 < 11; var769++) {
        var769 += 3;
    }    for (int var165 = 0; var165 < 6; var165++) {
        var165 += 2;
    }    int var557 = 0;
    while (var557 < 13) {
        var557 += 4;
        var557++;
    }

    int var63 = 99;
    if (var63 % 2 == 0) {
        printf("var63 is even\n");
    } else {
        printf("var63 is odd\n");
    }

    int var377 = 66;
    if (var377 % 2 == 0) {
        printf("var377 is even\n");
    } else {
        printf("var377 is odd\n");
    }

    int var335 = 89;
    if (var335 % 2 == 0) {
        printf("var335 is even\n");
    } else {
        printf("var335 is odd\n");
    }

    return 0;
}
