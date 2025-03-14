
#include <stdio.h>


int func544(int var23) {
    if (var23 <= 0) return 1;
    return func544(var23 - 1);
}

int func965(int var953) {
    if (var953 <= 0) return 1;
    return func965(var953 - 1);
}


int main() {
    for (int var562 = 0; var562 < 15; var562++) {
        var562 += 2;
    }    for (int var985 = 0; var985 < 20; var985++) {
        var985 += 2;
    }    int var208 = 0;
    while (var208 < 6) {
        var208 += 3;
        var208++;
    }

    int var970 = 47;
    if (var970 % 2 == 0) {
        printf("var970 is even\n");
    } else {
        printf("var970 is odd\n");
    }

    return 0;
}
