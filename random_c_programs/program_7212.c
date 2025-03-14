
#include <stdio.h>


int func70(int var702) {
    if (var702 <= 0) return 1;
    return func70(var702 - 1);
}

int func642(int var290) {
    if (var290 <= 0) return 1;
    return func642(var290 - 1);
}

int func879(int var877) {
    if (var877 <= 0) return 1;
    return func879(var877 - 1);
}

int func947(int var282) {
    if (var282 <= 0) return 1;
    return 1;
}

int func653(int var422) {
    if (var422 <= 0) return 1;
    return func653(var422 - 1);
}


int main() {
    int var452 = 0;
    while (var452 < 8) {
        var452 += 1;
        var452++;
    }    for (int var114 = 0; var114 < 14; var114++) {
        var114 += 5;
    }

    int var895 = 29;
    if (var895 % 2 == 0) {
        printf("var895 is even\n");
    } else {
        printf("var895 is odd\n");
    }

    int var446 = 75;
    if (var446 % 2 == 0) {
        printf("var446 is even\n");
    } else {
        printf("var446 is odd\n");
    }

    return 0;
}
