
#include <stdio.h>


int func392(int var909) {
    if (var909 <= 0) return 1;
    return func392(var909 - 1);
}

int func776(int var463) {
    if (var463 <= 0) return 1;
    return func776(var463 - 1);
}

int func145(int var420) {
    if (var420 <= 0) return 1;
    return func145(var420 - 1);
}

int func313(int var311) {
    if (var311 <= 0) return 1;
    return func313(var311 - 1);
}


int main() {
    for (int var608 = 0; var608 < 10; var608++) {
        var608 += 3;
    }    for (int var250 = 0; var250 < 6; var250++) {
        var250 += 5;
    }    for (int var844 = 0; var844 < 14; var844++) {
        var844 += 4;
    }    for (int var971 = 0; var971 < 18; var971++) {
        var971 += 4;
    }    for (int var319 = 0; var319 < 18; var319++) {
        var319 += 2;
    }

    int var852 = 53;
    if (var852 % 2 == 0) {
        printf("var852 is even\n");
    } else {
        printf("var852 is odd\n");
    }

    int var208 = 78;
    if (var208 % 2 == 0) {
        printf("var208 is even\n");
    } else {
        printf("var208 is odd\n");
    }

    return 0;
}
