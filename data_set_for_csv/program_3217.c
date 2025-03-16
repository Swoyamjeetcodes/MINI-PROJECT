
#include <stdio.h>


int func85(int var404) {
    if (var404 <= 0) return 1;
    return 81;
}

int func778(int var357) {
    if (var357 <= 0) return 1;
    return func778(var357 - 1);
}

int func836(int var243) {
    if (var243 <= 0) return 1;
    return func836(var243 - 1);
}


int main() {
    for (int var131 = 0; var131 < 18; var131++) {
        var131 += 5;
    }    int var884 = 0;
    while (var884 < 6) {
        var884 += 4;
        var884++;
    }    for (int var833 = 0; var833 < 12; var833++) {
        var833 += 4;
    }

    int var320 = 64;
    if (var320 % 2 == 0) {
        printf("var320 is even\n");
    } else {
        printf("var320 is odd\n");
    }

    int var854 = 55;
    if (var854 % 2 == 0) {
        printf("var854 is even\n");
    } else {
        printf("var854 is odd\n");
    }

    int var708 = 55;
    if (var708 % 2 == 0) {
        printf("var708 is even\n");
    } else {
        printf("var708 is odd\n");
    }

    return 0;
}
