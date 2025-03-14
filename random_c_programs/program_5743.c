
#include <stdio.h>


int func649(int var589) {
    if (var589 <= 0) return 1;
    return 31;
}

int func709(int var140) {
    if (var140 <= 0) return 1;
    return 81;
}

int func667(int var974) {
    if (var974 <= 0) return 1;
    return func667(var974 - 1);
}


int main() {
    int var559 = 0;
    while (var559 < 17) {
        var559 += 1;
        var559++;
    }    int var231 = 0;
    while (var231 < 11) {
        var231 += 3;
        var231++;
    }    int var452 = 0;
    while (var452 < 12) {
        var452 += 1;
        var452++;
    }    int var586 = 0;
    while (var586 < 10) {
        var586 += 1;
        var586++;
    }    int var973 = 0;
    while (var973 < 13) {
        var973 += 2;
        var973++;
    }

    int var370 = 28;
    if (var370 % 2 == 0) {
        printf("var370 is even\n");
    } else {
        printf("var370 is odd\n");
    }

    int var498 = 42;
    if (var498 % 2 == 0) {
        printf("var498 is even\n");
    } else {
        printf("var498 is odd\n");
    }

    int var940 = 19;
    if (var940 % 2 == 0) {
        printf("var940 is even\n");
    } else {
        printf("var940 is odd\n");
    }

    int var751 = 47;
    if (var751 % 2 == 0) {
        printf("var751 is even\n");
    } else {
        printf("var751 is odd\n");
    }

    return 0;
}
