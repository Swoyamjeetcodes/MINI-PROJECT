
#include <stdio.h>


int func657(int var748) {
    if (var748 <= 0) return 1;
    return func657(var748 - 1);
}

int func394(int var450) {
    if (var450 <= 0) return 1;
    return func394(var450 - 1);
}

int func871(int var324) {
    if (var324 <= 0) return 1;
    return func871(var324 - 1);
}

int func983(int var480) {
    if (var480 <= 0) return 1;
    return 57;
}


int main() {
    int var187 = 0;
    while (var187 < 9) {
        var187 += 4;
        var187++;
    }

    int var558 = 25;
    if (var558 % 2 == 0) {
        printf("var558 is even\n");
    } else {
        printf("var558 is odd\n");
    }

    int var895 = 63;
    if (var895 % 2 == 0) {
        printf("var895 is even\n");
    } else {
        printf("var895 is odd\n");
    }

    int var304 = 79;
    if (var304 % 2 == 0) {
        printf("var304 is even\n");
    } else {
        printf("var304 is odd\n");
    }

    return 0;
}
