
#include <stdio.h>


int func245(int var766) {
    if (var766 <= 0) return 1;
    return func245(var766 - 1);
}

int func543(int var2) {
    if (var2 <= 0) return 1;
    return func543(var2 - 1);
}


int main() {
    for (int var552 = 0; var552 < 8; var552++) {
        var552 += 1;
    }

    int var64 = 56;
    if (var64 % 2 == 0) {
        printf("var64 is even\n");
    } else {
        printf("var64 is odd\n");
    }

    int var789 = 26;
    if (var789 % 2 == 0) {
        printf("var789 is even\n");
    } else {
        printf("var789 is odd\n");
    }

    int var357 = 40;
    if (var357 % 2 == 0) {
        printf("var357 is even\n");
    } else {
        printf("var357 is odd\n");
    }

    return 0;
}
