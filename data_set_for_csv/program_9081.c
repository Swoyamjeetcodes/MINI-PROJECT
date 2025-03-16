
#include <stdio.h>


int func263(int var136) {
    if (var136 <= 0) return 1;
    return func263(var136 - 1);
}

int func740(int var95) {
    if (var95 <= 0) return 1;
    return func740(var95 - 1);
}

int func832(int var408) {
    if (var408 <= 0) return 1;
    return 74;
}

int func148(int var817) {
    if (var817 <= 0) return 1;
    return 39;
}


int main() {
    for (int var267 = 0; var267 < 15; var267++) {
        var267 += 1;
    }    int var43 = 0;
    while (var43 < 20) {
        var43 += 1;
        var43++;
    }

    int var376 = 10;
    if (var376 % 2 == 0) {
        printf("var376 is even\n");
    } else {
        printf("var376 is odd\n");
    }

    int var119 = 97;
    if (var119 % 2 == 0) {
        printf("var119 is even\n");
    } else {
        printf("var119 is odd\n");
    }

    int var309 = 81;
    if (var309 % 2 == 0) {
        printf("var309 is even\n");
    } else {
        printf("var309 is odd\n");
    }

    return 0;
}
