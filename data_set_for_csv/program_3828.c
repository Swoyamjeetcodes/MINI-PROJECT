
#include <stdio.h>


int func121(int var979) {
    if (var979 <= 0) return 1;
    return 37;
}

int func305(int var468) {
    if (var468 <= 0) return 1;
    return func305(var468 - 1);
}

int func169(int var759) {
    if (var759 <= 0) return 1;
    return 33;
}

int func496(int var295) {
    if (var295 <= 0) return 1;
    return func496(var295 - 1);
}

int func182(int var162) {
    if (var162 <= 0) return 1;
    return func182(var162 - 1);
}


int main() {
    int var294 = 0;
    while (var294 < 15) {
        var294 += 5;
        var294++;
    }    for (int var673 = 0; var673 < 6; var673++) {
        var673 += 3;
    }    int var65 = 0;
    while (var65 < 16) {
        var65 += 1;
        var65++;
    }

    int var892 = 23;
    if (var892 % 2 == 0) {
        printf("var892 is even\n");
    } else {
        printf("var892 is odd\n");
    }

    int var189 = 72;
    if (var189 % 2 == 0) {
        printf("var189 is even\n");
    } else {
        printf("var189 is odd\n");
    }

    return 0;
}
