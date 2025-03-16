
#include <stdio.h>


int func800(int var491) {
    if (var491 <= 0) return 1;
    return func800(var491 - 1);
}


int main() {
    int var870 = 0;
    while (var870 < 14) {
        var870 += 1;
        var870++;
    }    for (int var689 = 0; var689 < 12; var689++) {
        var689 += 3;
    }    int var103 = 0;
    while (var103 < 11) {
        var103 += 3;
        var103++;
    }

    int var98 = 55;
    if (var98 % 2 == 0) {
        printf("var98 is even\n");
    } else {
        printf("var98 is odd\n");
    }

    int var785 = 96;
    if (var785 % 2 == 0) {
        printf("var785 is even\n");
    } else {
        printf("var785 is odd\n");
    }

    int var50 = 15;
    if (var50 % 2 == 0) {
        printf("var50 is even\n");
    } else {
        printf("var50 is odd\n");
    }

    return 0;
}
