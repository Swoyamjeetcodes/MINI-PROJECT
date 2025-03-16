
#include <stdio.h>


int func357(int var758) {
    if (var758 <= 0) return 1;
    return func357(var758 - 1);
}

int func557(int var440) {
    if (var440 <= 0) return 1;
    return func557(var440 - 1);
}

int func170(int var150) {
    if (var150 <= 0) return 1;
    return 33;
}

int func402(int var85) {
    if (var85 <= 0) return 1;
    return func402(var85 - 1);
}

int func625(int var743) {
    if (var743 <= 0) return 1;
    return func625(var743 - 1);
}


int main() {
    int var14 = 0;
    while (var14 < 20) {
        var14 += 3;
        var14++;
    }    int var618 = 0;
    while (var618 < 8) {
        var618 += 1;
        var618++;
    }

    int var698 = 13;
    if (var698 % 2 == 0) {
        printf("var698 is even\n");
    } else {
        printf("var698 is odd\n");
    }

    return 0;
}
