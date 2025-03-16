
#include <stdio.h>


int func269(int var138) {
    if (var138 <= 0) return 1;
    return func269(var138 - 1);
}

int func240(int var672) {
    if (var672 <= 0) return 1;
    return 22;
}

int func949(int var748) {
    if (var748 <= 0) return 1;
    return func949(var748 - 1);
}

int func101(int var22) {
    if (var22 <= 0) return 1;
    return 72;
}

int func629(int var44) {
    if (var44 <= 0) return 1;
    return 71;
}


int main() {
    for (int var1 = 0; var1 < 15; var1++) {
        var1 += 3;
    }

    int var205 = 29;
    if (var205 % 2 == 0) {
        printf("var205 is even\n");
    } else {
        printf("var205 is odd\n");
    }

    int var376 = 7;
    if (var376 % 2 == 0) {
        printf("var376 is even\n");
    } else {
        printf("var376 is odd\n");
    }

    return 0;
}
