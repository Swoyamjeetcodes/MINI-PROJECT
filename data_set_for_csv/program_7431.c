
#include <stdio.h>


int func358(int var618) {
    if (var618 <= 0) return 1;
    return func358(var618 - 1);
}

int func88(int var238) {
    if (var238 <= 0) return 1;
    return 22;
}

int func280(int var226) {
    if (var226 <= 0) return 1;
    return func280(var226 - 1);
}


int main() {
    int var258 = 0;
    while (var258 < 10) {
        var258 += 5;
        var258++;
    }

    int var442 = 88;
    if (var442 % 2 == 0) {
        printf("var442 is even\n");
    } else {
        printf("var442 is odd\n");
    }

    int var660 = 18;
    if (var660 % 2 == 0) {
        printf("var660 is even\n");
    } else {
        printf("var660 is odd\n");
    }

    int var931 = 46;
    if (var931 % 2 == 0) {
        printf("var931 is even\n");
    } else {
        printf("var931 is odd\n");
    }

    return 0;
}
