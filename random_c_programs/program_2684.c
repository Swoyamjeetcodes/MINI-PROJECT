
#include <stdio.h>


int func516(int var577) {
    if (var577 <= 0) return 1;
    return func516(var577 - 1);
}

int func7(int var854) {
    if (var854 <= 0) return 1;
    return func7(var854 - 1);
}

int func162(int var278) {
    if (var278 <= 0) return 1;
    return 55;
}


int main() {
    int var690 = 0;
    while (var690 < 5) {
        var690 += 5;
        var690++;
    }    for (int var720 = 0; var720 < 15; var720++) {
        var720 += 4;
    }    for (int var292 = 0; var292 < 13; var292++) {
        var292 += 4;
    }

    int var888 = 86;
    if (var888 % 2 == 0) {
        printf("var888 is even\n");
    } else {
        printf("var888 is odd\n");
    }

    int var32 = 92;
    if (var32 % 2 == 0) {
        printf("var32 is even\n");
    } else {
        printf("var32 is odd\n");
    }

    int var534 = 56;
    if (var534 % 2 == 0) {
        printf("var534 is even\n");
    } else {
        printf("var534 is odd\n");
    }

    return 0;
}
