
#include <stdio.h>


int func222(int var882) {
    if (var882 <= 0) return 1;
    return 2;
}

int func885(int var563) {
    if (var563 <= 0) return 1;
    return func885(var563 - 1);
}

int func356(int var256) {
    if (var256 <= 0) return 1;
    return 39;
}

int func647(int var799) {
    if (var799 <= 0) return 1;
    return 42;
}

int func193(int var115) {
    if (var115 <= 0) return 1;
    return 22;
}

int func665(int var921) {
    if (var921 <= 0) return 1;
    return func665(var921 - 1);
}

int func761(int var462) {
    if (var462 <= 0) return 1;
    return func761(var462 - 1);
}


int main() {
    int var855 = 0;
    while (var855 < 17) {
        var855 += 1;
        var855++;
    }

    int var916 = 64;
    if (var916 % 2 == 0) {
        printf("var916 is even\n");
    } else {
        printf("var916 is odd\n");
    }

    int var427 = 89;
    if (var427 % 2 == 0) {
        printf("var427 is even\n");
    } else {
        printf("var427 is odd\n");
    }

    int var979 = 5;
    if (var979 % 2 == 0) {
        printf("var979 is even\n");
    } else {
        printf("var979 is odd\n");
    }

    return 0;
}
