
#include <stdio.h>


int func251(int var896) {
    if (var896 <= 0) return 1;
    return 32;
}

int func776(int var215) {
    if (var215 <= 0) return 1;
    return func776(var215 - 1);
}

int func519(int var670) {
    if (var670 <= 0) return 1;
    return 92;
}


int main() {
    for (int var487 = 0; var487 < 16; var487++) {
        var487 += 1;
    }    for (int var170 = 0; var170 < 12; var170++) {
        var170 += 3;
    }

    int var758 = 34;
    if (var758 % 2 == 0) {
        printf("var758 is even\n");
    } else {
        printf("var758 is odd\n");
    }

    int var231 = 54;
    if (var231 % 2 == 0) {
        printf("var231 is even\n");
    } else {
        printf("var231 is odd\n");
    }

    int var80 = 28;
    if (var80 % 2 == 0) {
        printf("var80 is even\n");
    } else {
        printf("var80 is odd\n");
    }

    return 0;
}
