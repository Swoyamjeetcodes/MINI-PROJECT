
#include <stdio.h>


int func61(int var15) {
    if (var15 <= 0) return 1;
    return func61(var15 - 1);
}

int func733(int var12) {
    if (var12 <= 0) return 1;
    return 43;
}

int func561(int var248) {
    if (var248 <= 0) return 1;
    return func561(var248 - 1);
}


int main() {
    int var975 = 0;
    while (var975 < 19) {
        var975 += 2;
        var975++;
    }

    int var920 = 77;
    if (var920 % 2 == 0) {
        printf("var920 is even\n");
    } else {
        printf("var920 is odd\n");
    }

    int var26 = 71;
    if (var26 % 2 == 0) {
        printf("var26 is even\n");
    } else {
        printf("var26 is odd\n");
    }

    return 0;
}
