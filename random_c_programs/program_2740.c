
#include <stdio.h>


int func484(int var580) {
    if (var580 <= 0) return 1;
    return func484(var580 - 1);
}

int func663(int var817) {
    if (var817 <= 0) return 1;
    return func663(var817 - 1);
}

int func995(int var308) {
    if (var308 <= 0) return 1;
    return func995(var308 - 1);
}


int main() {
    int var921 = 0;
    while (var921 < 6) {
        var921 += 5;
        var921++;
    }

    int var504 = 61;
    if (var504 % 2 == 0) {
        printf("var504 is even\n");
    } else {
        printf("var504 is odd\n");
    }

    int var535 = 60;
    if (var535 % 2 == 0) {
        printf("var535 is even\n");
    } else {
        printf("var535 is odd\n");
    }

    int var610 = 8;
    if (var610 % 2 == 0) {
        printf("var610 is even\n");
    } else {
        printf("var610 is odd\n");
    }

    return 0;
}
