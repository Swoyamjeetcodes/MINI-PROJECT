
#include <stdio.h>


int func171(int var285) {
    if (var285 <= 0) return 1;
    return 14;
}

int func359(int var616) {
    if (var616 <= 0) return 1;
    return func359(var616 - 1);
}

int func390(int var280) {
    if (var280 <= 0) return 1;
    return func390(var280 - 1);
}

int func457(int var268) {
    if (var268 <= 0) return 1;
    return func457(var268 - 1);
}

int func407(int var185) {
    if (var185 <= 0) return 1;
    return 81;
}


int main() {
    for (int var430 = 0; var430 < 14; var430++) {
        var430 += 4;
    }

    int var7 = 30;
    if (var7 % 2 == 0) {
        printf("var7 is even\n");
    } else {
        printf("var7 is odd\n");
    }

    int var9 = 25;
    if (var9 % 2 == 0) {
        printf("var9 is even\n");
    } else {
        printf("var9 is odd\n");
    }

    int var248 = 8;
    if (var248 % 2 == 0) {
        printf("var248 is even\n");
    } else {
        printf("var248 is odd\n");
    }

    return 0;
}
