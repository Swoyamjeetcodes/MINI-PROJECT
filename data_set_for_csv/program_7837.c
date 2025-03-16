
#include <stdio.h>


int func23(int var940) {
    if (var940 <= 0) return 1;
    return 40;
}

int func446(int var282) {
    if (var282 <= 0) return 1;
    return func446(var282 - 1);
}

int func715(int var270) {
    if (var270 <= 0) return 1;
    return func715(var270 - 1);
}

int func871(int var488) {
    if (var488 <= 0) return 1;
    return func871(var488 - 1);
}


int main() {
    int var734 = 0;
    while (var734 < 6) {
        var734 += 2;
        var734++;
    }    for (int var886 = 0; var886 < 20; var886++) {
        var886 += 2;
    }

    int var182 = 64;
    if (var182 % 2 == 0) {
        printf("var182 is even\n");
    } else {
        printf("var182 is odd\n");
    }

    int var469 = 62;
    if (var469 % 2 == 0) {
        printf("var469 is even\n");
    } else {
        printf("var469 is odd\n");
    }

    return 0;
}
