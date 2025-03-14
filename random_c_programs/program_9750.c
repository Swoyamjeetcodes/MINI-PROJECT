
#include <stdio.h>


int func314(int var199) {
    if (var199 <= 0) return 1;
    return func314(var199 - 1);
}

int func133(int var491) {
    if (var491 <= 0) return 1;
    return func133(var491 - 1);
}

int func872(int var213) {
    if (var213 <= 0) return 1;
    return func872(var213 - 1);
}

int func864(int var333) {
    if (var333 <= 0) return 1;
    return 62;
}


int main() {
    int var987 = 0;
    while (var987 < 7) {
        var987 += 4;
        var987++;
    }

    int var468 = 1;
    if (var468 % 2 == 0) {
        printf("var468 is even\n");
    } else {
        printf("var468 is odd\n");
    }

    int var33 = 34;
    if (var33 % 2 == 0) {
        printf("var33 is even\n");
    } else {
        printf("var33 is odd\n");
    }

    int var430 = 42;
    if (var430 % 2 == 0) {
        printf("var430 is even\n");
    } else {
        printf("var430 is odd\n");
    }

    return 0;
}
