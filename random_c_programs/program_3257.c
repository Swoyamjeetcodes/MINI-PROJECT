
#include <stdio.h>


int func314(int var250) {
    if (var250 <= 0) return 1;
    return func314(var250 - 1);
}

int func402(int var494) {
    if (var494 <= 0) return 1;
    return func402(var494 - 1);
}

int func898(int var93) {
    if (var93 <= 0) return 1;
    return 64;
}

int func784(int var909) {
    if (var909 <= 0) return 1;
    return 96;
}

int func610(int var138) {
    if (var138 <= 0) return 1;
    return func610(var138 - 1);
}


int main() {
    for (int var444 = 0; var444 < 19; var444++) {
        var444 += 1;
    }

    int var514 = 69;
    if (var514 % 2 == 0) {
        printf("var514 is even\n");
    } else {
        printf("var514 is odd\n");
    }

    int var998 = 53;
    if (var998 % 2 == 0) {
        printf("var998 is even\n");
    } else {
        printf("var998 is odd\n");
    }

    int var744 = 54;
    if (var744 % 2 == 0) {
        printf("var744 is even\n");
    } else {
        printf("var744 is odd\n");
    }

    return 0;
}
