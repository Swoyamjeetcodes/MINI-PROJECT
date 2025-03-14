
#include <stdio.h>


int func838(int var829) {
    if (var829 <= 0) return 1;
    return func838(var829 - 1);
}

int func912(int var449) {
    if (var449 <= 0) return 1;
    return func912(var449 - 1);
}

int func739(int var283) {
    if (var283 <= 0) return 1;
    return func739(var283 - 1);
}

int func294(int var618) {
    if (var618 <= 0) return 1;
    return func294(var618 - 1);
}

int func450(int var257) {
    if (var257 <= 0) return 1;
    return func450(var257 - 1);
}


int main() {
    int var547 = 0;
    while (var547 < 17) {
        var547 += 1;
        var547++;
    }    for (int var465 = 0; var465 < 18; var465++) {
        var465 += 2;
    }

    int var963 = 53;
    if (var963 % 2 == 0) {
        printf("var963 is even\n");
    } else {
        printf("var963 is odd\n");
    }

    int var63 = 79;
    if (var63 % 2 == 0) {
        printf("var63 is even\n");
    } else {
        printf("var63 is odd\n");
    }

    return 0;
}
