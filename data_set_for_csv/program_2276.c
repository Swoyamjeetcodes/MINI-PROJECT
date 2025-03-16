
#include <stdio.h>


int func184(int var314) {
    if (var314 <= 0) return 1;
    return 64;
}

int func588(int var462) {
    if (var462 <= 0) return 1;
    return 84;
}

int func145(int var897) {
    if (var897 <= 0) return 1;
    return func145(var897 - 1);
}

int func299(int var46) {
    if (var46 <= 0) return 1;
    return 92;
}

int func611(int var829) {
    if (var829 <= 0) return 1;
    return func611(var829 - 1);
}


int main() {
    int var820 = 0;
    while (var820 < 12) {
        var820 += 2;
        var820++;
    }

    int var478 = 6;
    if (var478 % 2 == 0) {
        printf("var478 is even\n");
    } else {
        printf("var478 is odd\n");
    }

    int var928 = 82;
    if (var928 % 2 == 0) {
        printf("var928 is even\n");
    } else {
        printf("var928 is odd\n");
    }

    return 0;
}
