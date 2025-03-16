
#include <stdio.h>


int func706(int var987) {
    if (var987 <= 0) return 1;
    return 75;
}

int func435(int var982) {
    if (var982 <= 0) return 1;
    return 21;
}

int func301(int var436) {
    if (var436 <= 0) return 1;
    return func301(var436 - 1);
}

int func522(int var176) {
    if (var176 <= 0) return 1;
    return func522(var176 - 1);
}


int main() {
    int var780 = 0;
    while (var780 < 17) {
        var780 += 3;
        var780++;
    }    for (int var63 = 0; var63 < 11; var63++) {
        var63 += 2;
    }    for (int var42 = 0; var42 < 6; var42++) {
        var42 += 2;
    }

    int var414 = 99;
    if (var414 % 2 == 0) {
        printf("var414 is even\n");
    } else {
        printf("var414 is odd\n");
    }

    return 0;
}
