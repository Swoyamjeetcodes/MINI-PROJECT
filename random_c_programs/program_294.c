
#include <stdio.h>


int func538(int var217) {
    if (var217 <= 0) return 1;
    return 88;
}

int func602(int var963) {
    if (var963 <= 0) return 1;
    return func602(var963 - 1);
}

int func250(int var671) {
    if (var671 <= 0) return 1;
    return 63;
}

int func370(int var469) {
    if (var469 <= 0) return 1;
    return func370(var469 - 1);
}

int func804(int var842) {
    if (var842 <= 0) return 1;
    return func804(var842 - 1);
}


int main() {
    int var521 = 0;
    while (var521 < 5) {
        var521 += 3;
        var521++;
    }

    int var504 = 8;
    if (var504 % 2 == 0) {
        printf("var504 is even\n");
    } else {
        printf("var504 is odd\n");
    }

    int var874 = 40;
    if (var874 % 2 == 0) {
        printf("var874 is even\n");
    } else {
        printf("var874 is odd\n");
    }

    return 0;
}
